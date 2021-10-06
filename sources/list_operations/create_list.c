/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 18:17:13 by wjonatho          #+#    #+#             */
/*   Updated: 2021/10/06 15:17:22 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_first_element(int data)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		exit(0);
	node->value = data;
	node->next = NULL;
	return (node);
}

t_list	*create_list(int argc, char **argv)
{
	int		i;
	t_list	*stack;

	i = 1;
	if (argc < 2)
	{
		stack = NULL;
	}
	else
	{
		stack = create_first_element(ft_atoi(argv[i++]));
		while (i < argc)
		{
			add_element_end(ft_atoi(argv[i++]), stack);
		}
	}
	return (stack);
}
