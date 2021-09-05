/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:06:48 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/05 19:19:04 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	remove_all_elements(t_list *head)
{
	t_list	*tmp;

	tmp = head;
	while (head)
	{
		head = head->next;
		free(p);
	}
	return (NULL);
}
