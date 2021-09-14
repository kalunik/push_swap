/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_algorithm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 17:24:59 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/14 13:58:46 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*static void	swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}*/

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