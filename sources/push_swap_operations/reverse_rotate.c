/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:26:00 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/08 18:21:35 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_list **head)
{
/*	t_list	*buf;
	size_t	len;
	size_t	i;

	i = 0;
	if (*head)
	{
		buf = *head;
		len = ft_listlen(*head);
		while (i <= len - 2)
		{
			buf = buf->next;
			i++;
		}
		(*head) = add_element_start(buf->value, (*head));
		remove_last_element(head);
	}*/
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *head;
	tmp1 = tmp;
	while (tmp->next->next)
		tmp = tmp->next;
	*head = tmp->next;
	tmp->next = NULL;
	(*head)->next = tmp1;
}

void	rra(t_list **stack_a)
{
	reverse_rotate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	reverse_rotate(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	write(1, "rrr\n", 4);
}

/*int	main(void)
{
	t_list	*test;

	test = create_first_element(2);
	add_element_end(52, test);
	add_element_end(100, test);
	print_list(test);
	reverse_rotate(&test);
	//remove_last_element(&test);
	print_list(test);
	return (0);
}
//fixme delete comment*/
