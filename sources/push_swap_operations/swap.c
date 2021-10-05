/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:28:56 by wjonatho          #+#    #+#             */
/*   Updated: 2021/10/01 22:04:49 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_1st_two_elements(t_list **head)
{
	t_list	*first;
	t_list	*second;

	if (ft_listlen(*head) > 1)
	{
		first = (*head);
		second = (*head)->next;
		first->next = (*head)->next->next;
		second->next = first;
		(*head) = second;
	}
}

void	sa(t_list **stack_a)
{
	swap_1st_two_elements(stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_list **stack_b)
{
	swap_1st_two_elements(stack_b);
	write(1, "sb\n", 3);
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	swap_1st_two_elements(stack_a);
	swap_1st_two_elements(stack_b);
	write(1, "ss\n", 3);
}
