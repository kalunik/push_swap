/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:24:59 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/10 18:08:14 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

static void	two_element_sort(t_list **stack_a)
{
	int	one;
	int	two;

	one = (*stack_a)->value;
	two = (*stack_a)->next->value;
	if (one > two)
		sa(stack_a);
}

static void	three_element_sort(t_list **stack_a)
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

static void	five_element_sort(t_list **stack_a, t_list **stack_b)
{
	pb(stack_a, stack_b);
	pb(stack_a, stack_b);
	three_element_sort(stack_a);
	pa(stack_b, stack_a);

	pa(stack_b, stack_a);
	ra(stack_a);
}

void	sort_algorithm(int argc, t_list **stack_a, t_list **stack_b)
{
	if (argc < 101)
	{
		if (argc < 6)
		{
			if (argc == 3)
				two_element_sort(stack_a);
			else
				three_element_sort(stack_a);
		}
		else //5 - 100 elem
		{
			five_element_sort(stack_a, stack_b);
		}
	}
	else
	{
		if (argc < 501) //100 elem
		{
			three_element_sort(stack_b);
			exit(0);
		}
		else //500 elem
		{
			exit(0);
		}
	}
}