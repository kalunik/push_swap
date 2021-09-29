/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:29:20 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/29 20:48:09 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	zero_flag_set(t_list **head)
{
	t_list	*tmp;

	tmp = *head;
	while (*head)
	{
		(*head)->sorted = 0;
		(*head) = (*head)->next;
	}
	*head = tmp;
}

void	ft_qsort(int argc, char **argv, t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		j;
	int		*sup_arr;
	int		*arr;
	int		pos;
	int		count_chunks;
	int		count_in_b;

	arr = fill_array(argc, argv);
	bubble_sort(arr, argc - 1);
	count_chunks = support_elements(argc, argv, arr, &sup_arr); //todo free(sup_arr)
	printf("count_chunks -- %d\n", count_chunks);
	zero_flag_set(stack_a);
	i = 0;
	j = 0;
	count_in_b = 0;
	while (j < count_chunks)
	{
		printf("{red}--{sup_arr[%d]} -- %d\n", j, sup_arr[j]);
		while (arr[i] <= sup_arr[j] && i < argc - 1)
		{
			//printf("arr[%d] -- %d\n", i, arr[i]);
			pos = element_pos_in_list(arr[i], *stack_a);
			element_to_top(argc - count_in_b, pos, stack_a);
			pb(stack_a, stack_b);
			count_in_b++;
			i++;
		}
		j++;
	}
	//print_list(*stack_b);
	//free(sup_arr);
}*/

void	index_set(t_list **head, int *sorted_arr, int arr_size)
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

static int	position_of_max(t_list *head)
{
	return (elem_pos_in_list(find_max(head), head));
}

void	searching_in_stack_b(t_list **stack_a, t_list **st_b)
{
	while (*st_b)
	{
		if ((*st_b)->index == position_of_max(*st_b))
			pa(st_b, stack_a);
		else
		{
			if (elem_pos_in_list((*st_b)->value, *st_b) > ft_listlen(*st_b) / 2)
				rrb(st_b);
			else
				rb(st_b);
		}
		//(*st_b) = (*st_b)->next;
	}
}

void	searching_in_stack_a(int argc, t_list **stack_a, t_list **stack_b)
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
		printf("%d --- index || search --- %d\n", (*stack_a)->index, searching_index);
		print_list(*stack_a);
		if ((*stack_a)->index > searching_index) //убрал =
			ra(stack_a);
		else if ((*stack_a)->index <= searching_index && searching_index > 1)
		{
			pb(stack_a, stack_b);
			searching_index++;
			rb(stack_b);
		}
		else if ((*stack_a)->index <= searching_index + chunk)
		{
			pb(stack_a, stack_b);
			searching_index++;
		}
	}
	searching_in_stack_b(stack_a, stack_b);
}

void	do_sort_500(t_list **a, t_list **b)
{
	int	l;

	l = 0;
	while ((*a) != NULL)
	{
		if ((*a)->index <= l && l > 1 )
		{
			pb(a, b), l++;
			rb(b);
		}
		else if ((*a)->index <= l + 30)
			pb(a, b), l++;
		else if ((*a)->index >= l)
			ra(a);
	}
	searching_in_stack_b(a, b);
}

void	big_elem_srt(int argc, char **argv, t_list **stack_a, t_list **stack_b)
{
	int	*arr;

	arr = fill_array(argc, argv);
	bubble_sort(arr, argc - 1);
	index_set(stack_a, arr, argc - 1);
	//do_sort_500(stack_a, stack_b);
	searching_in_stack_a(argc, stack_a, stack_b);
//	searching_in_stack_b(stack_a, stack_b);
}
