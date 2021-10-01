/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:06:48 by wjonatho          #+#    #+#             */
/*   Updated: 2021/10/01 22:04:49 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	remove_all_elements(t_list *head)
{
	if (!head)
		return ;
	remove_all_elements(head->next);
	free(head);
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
	int		len;
	int		j;
	t_list	*buf;
	t_list	*last_elem;

	if (*head)
	{
		j = 1;
		len = (int)ft_listlen(*head);
		buf = (*head);
		while (j <= len - 2)
		{
			buf = buf->next;
			j++;
		}
		last_elem = buf;
		last_elem = last_elem->next;
		free(last_elem);
		buf->next = NULL;
	}
}
