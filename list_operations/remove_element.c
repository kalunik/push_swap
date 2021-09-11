/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_element.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:06:48 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/11 18:17:34 by wjonatho         ###   ########.fr       */
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
	int		len;
	int		j;
	t_list	*buf;
	t_list	*last_elem;

	if (*head)
	{
		j = 1;
		/*buf = (*head);
		while (buf)
		{
			buf = buf->next;
			i++;
		}
		//free(buf); //todo вероятно вместо free надо buf = NULL*/
		len = ft_listlen(*head);
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

/*int    main()
{
	t_list    *src;

	src = create_first_element(2);
	add_element_end(52, src);
	add_element_end(100, src);
	remove_last_element(&src);
}//fixme delete comments
 */
