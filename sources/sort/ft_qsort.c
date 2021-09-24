/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:29:20 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/24 18:00:24 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_qsort(int argc, char **argv, t_list **stack_a, t_list **stack_b)
{
	int	*sup_arr;
	int	count_elem_in_b;
	int	pos_of_chunk;
	int	i;

	i = 0;
	sup_arr = support_elements(argc, argv); //todo free(sup_arr)
	count_elem_in_b = 0;
	while (sup_arr[i])
	{
		if ((*stack_a)->value <= sup_arr[i])
		{
			pos_of_chunk = element_pos_in_list(find_min(*stack_a), *stack_a);
			//printf("%d-%d\n", find_min(*stack_a), pos_of_min);
			element_to_top(argc - count_elem_in_b, pos_of_min, stack_a);
			pb(stack_a, stack_b);
			count_elem_in_b++;
		}
		i++;
	}
	three_element_sort(stack_a);
	//print_list(*stack_a);
	while (count_elem_in_b-- > 0)
	{
		pa(stack_b, stack_a);
	}
	free(sup_arr);
}
