/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:29:20 by wjonatho          #+#    #+#             */
/*   Updated: 2021/10/01 18:02:36 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	index_set(t_list **head, const int *sorted_arr, int arr_size)
{
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = (*head);
	while (*head)
	{
		while (i < arr_size)
		{
			if (sorted_arr[i] == (*head)->value)
			{
				(*head)->index = i;
			}
			i++;
		}
		i = 0;
		*head = (*head)->next;
	}
	(*head) = tmp;
}

static int	elem_start_or_end(int len_of_stack, t_list *head)
{
	if (index_pos_in_list(find_max_index(head), head) > len_of_stack / 2)
		return (1);
	return (0);
}

static void	searching_in_stack_b(int argc, t_list **stack_a, t_list **st_b)
{
	int	start_or_end;
	int	max_index;

	while (*st_b)
	{
		start_or_end = elem_start_or_end(argc - 1, *st_b);
		max_index = find_max_index(*st_b);
		if (((*st_b)->index != max_index) && !start_or_end)
		{
			rb(st_b);
		}
		else if (((*st_b)->index != max_index) && start_or_end)
		{
			rrb(st_b);
		}
		else if ((*st_b)->index == max_index)
		{
			pa(st_b, stack_a), argc--;
		}
	}
}

static void	searching_in_stack_a(int argc, t_list **stack_a, t_list **stack_b)
{
	int	chunk;
	int	searching_index;

	searching_index = 0;
	if (argc >= 250)
		chunk = 30;
	else
		chunk = 15;
	while (*stack_a)
	{
		if ((*stack_a)->index <= searching_index && searching_index > 1)
		{
			pb(stack_a, stack_b);
			searching_index++;
			rb(stack_b);
		}
		else if ((*stack_a)->index <= (searching_index + chunk))
		{
			pb(stack_a, stack_b);
			searching_index++;
		}
		else if ((*stack_a)->index >= searching_index)
			ra(stack_a);
	}
}

void	big_elem_srt(int argc, char **argv, t_list **st_a, t_list **st_b)
{
	int	*arr;

	arr = fill_array(argc, argv);
	bubble_sort(arr, argc - 1);
	index_set(st_a, arr, argc - 1);
	free(arr);
	searching_in_stack_a(argc, st_a, st_b);
	searching_in_stack_b(argc, st_a, st_b);
}
