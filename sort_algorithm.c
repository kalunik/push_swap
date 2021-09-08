/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:24:59 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/08 19:53:41 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	three_element_sort(t_list **stack_a)
{
	int	1st;
	int	2nd;
	int	3d;

	1st = (*stack_a)->value;
	2nd = (*stack_a)->next->value;
	3d = (*stack_a)->next->next->value;
	if (1st > 2nd && 2nd < 3d && 3d > 1st)
		sa(stack_a);
	if else (1st > 2nd && 2nd > 3d && 3d < 1st) //можно объединить с первым
	{
		sa(stack_a);
		rra(stack_a);
	}
	if else (1st < 2nd && 2nd > 3d && 3d > 1st)
	{
		sa(stack_a);
		ra(stack_a);
	}
	if else (1st > 2nd && 2nd < 3d && 3d < 1st)
		ra(stack_a);
	if else (1st < 2nd && 2nd > 3d && 3d < 1st)
		rra(stack_a);
}

void	sort_algorithm(int argc, t_list **stack_a, t_list **stack_b)
{
	if (argc < 101)
	{
		if (argc < 6) //3 elem
		{
			three_element_sort(&stack_a);
		}
		else //5 elem
		{
			break ;
		}
	}
	else
	{
		if (argc < 501) //100 elem
		{
			break ;
		}
		else //500 elem
		{
			break ;
		}
	}
}