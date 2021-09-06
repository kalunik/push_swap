/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:06:48 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/06 19:15:52 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	remove_all_elements(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (head)
	{
		head = head->next;
		free(tmp);
	}
}

void	remove_first_element(t_list **head)
{
	t_list	*buf;

	buf = (*head)->next;
	free((*head));
	(*head) = buf;
}

void	remove_last_element(t_list **head)
{
	int		i;
	t_list	*buf;

	if (*head)
	{
		i = 1;
		buf = (*head);
		while (buf)
		{
			buf = buf->next;
			i++;
		}
		free(buf);
		buf = (*head);
		while (i - 1)
		{
			buf = buf->next;
			i--;
		}
		buf = NULL;
	}
}
