/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 19:28:56 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/06 18:18:25 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap_first_two_elements(t_list **head)
{
	t_list	*first;
	t_list	*second;

	first = (*head);
	second = (*head)->next;
	first->next = (*head)->next->next;
	second->next = first;
	(*head) = second;
}

/*
int		main()
{
	t_list	*test;

	test = create_first_element(2);
	add_element_end(52, test);
	add_element_end(100, test);
	print_list(test);
	swap_first_two_elements(&test);
	print_list(test);
	return (0);
}
 fixme delete comment
 */
