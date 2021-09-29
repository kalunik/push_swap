/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:26:00 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/29 20:39:20 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **head)
{
	/*if (*head)
	{
		add_element_end((*head)->value, (*head));
		remove_first_element(head);
	}*/
	t_list	*second;
	t_list	*last;
	t_list	*tmp;

	if ((*head) == NULL || (*head)->next == NULL)
		return ;
	second = (*head)->next;
	last = *head;
	tmp = *head;
	while (last->next != NULL)
		last = last->next;
	*head = second;
	last->next = tmp;
	tmp->next = NULL;
}

void	ra(t_list **stack_a)
{
	rotate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_list **stack_b)
{
	rotate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
	write(1, "rr\n", 3);
}

/*
int		main()
{
	t_list	*test;

	test = create_first_element(2);
	add_element_end(52, test);
	add_element_end(100, test);
	print_list(test);
	rotate(&test);
	print_list(test);
	return (0);
}
//fixme delete comment*/
