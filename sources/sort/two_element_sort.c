/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_element_sort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:34:38 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/14 13:34:38 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	two_element_sort(t_list **stack_a)
{
	int	one;
	int	two;

	one = (*stack_a)->value;
	two = (*stack_a)->next->value;
	if (one > two)
		sa(stack_a);
}
