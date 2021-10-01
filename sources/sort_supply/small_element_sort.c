/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_element_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 16:59:03 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/29 18:30:07 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	small_element_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	int	count_droped_min;
	int	pos_of_min;

	count_droped_min = 0;
	while (count_droped_min < (argc - 3) - 1)
	{
		pos_of_min = elem_pos_in_list(find_min(*stack_a), *stack_a);
		element_to_top(argc - count_droped_min, pos_of_min, stack_a);
		pb(stack_a, stack_b);
		count_droped_min++;
	}
	three_element_sort(stack_a);
	while (count_droped_min-- > 0)
	{
		pa(stack_b, stack_a);
	}
}
