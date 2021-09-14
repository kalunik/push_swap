/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_element_sort.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:39:03 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/14 13:39:03 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	three_element_sort(t_list **stack_a)
{
	int	one;
	int	two;
	int	three;

	one = (*stack_a)->value;
	two = (*stack_a)->next->value;
	three = (*stack_a)->next->next->value;
	if (one > two && two < three && three > one)
		sa(stack_a);
	else if (one > two && two > three && three < one)
	{
		sa(stack_a);
		rra(stack_a);
	}
	else if (one < two && two > three && three > one)
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if (one > two && two < three && three < one)
		ra(stack_a);
	else if (one < two && two > three && three < one)
		rra(stack_a);
}
