/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_element.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 16:38:24 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/05 18:52:53 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*add_element_start(int data, t_list *head)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->value = data;
	node->next = head;
	return (node);
}

void	add_element_end(int data, t_list *head)
{
	t_list	*node;
	t_list	*tmp;

	node = malloc(sizeof(t_list));
	node->value = data;
	node->next = NULL;
	tmp = head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;
}
