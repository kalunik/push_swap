/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:24:59 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/11 18:07:55 by wjonatho         ###   ########.fr       */
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

/*static void	swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}*/

static int	find_max(t_list *list)
{
	int	max;
	int	number;

	max = list->value;
	while (list)
	{
		number = list->value;
		if (max < number)
			max = number;
		list = list->next;
	}
	return (max);
}

int	element_position_in_list(int value, t_list *list)
{
	int	position;
	int	number;

	position = 1;
	while (list)
	{
		number = list->value;
		if (value == number)
			return (position);
		list = list->next;
		position++;
	}
	return (0);
}

void	max_element_to_top(int argc, int position_of_max, t_list **list)
{
	int	i;

	i = 1;
	if (position_of_max > (argc / 2))
	{
		while (i++ <= (argc - position_of_max))
			rra(list);
	}
	else
	{
		while (i++ < position_of_max)
			ra(list);
	}
}

static void	small_element_sort(int argc, t_list **stack_a, t_list **stack_b)
{
	int	count_droped_max;
	int	pos_of_max;

	count_droped_max = 0;
	while (count_droped_max < (argc - 3) - 1)
	{
		pos_of_max = element_position_in_list(find_max(*stack_a), *stack_a);
		max_element_to_top(argc - count_droped_max, pos_of_max, stack_a);
		pb(stack_a, stack_b);
		count_droped_max++;
	}
	three_element_sort(stack_a);
	while (count_droped_max-- > 0)
	{
		pa(stack_b, stack_a);
		ra(stack_a);
	}
}

void	sort_algorithm(int argc, t_list **stack_a, t_list **stack_b)
{
	if (argc < 101)
	{
		if (argc < 5)
		{
			if (argc == 3)
				two_element_sort(stack_a);
			else
				three_element_sort(stack_a);
		}
		else //4 - 100 elem
		{
			small_element_sort(argc, stack_a, stack_b);
		}
	}
	else
	{
		if (argc < 501) //100 elem
		{
			small_element_sort(argc, stack_a, stack_b);
		}
		else //500 elem
		{
			small_element_sort(argc, stack_a, stack_b);
		}
	}
}