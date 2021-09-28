/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:29:20 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/28 19:39:28 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	zero_flag_set(t_list **head)
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
}

/*void	big_element_sort(t_list **stack_a, t_list **stack_b)
{
	int
}*/
