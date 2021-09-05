/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:18:36 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/05 15:39:34 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_create_list(t_list **list, int value)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	node->value = value;
	node->next = *list;
	*list = node;
}

void	ft_print_list(t_list *list)
{
	if (list)
	{
		ft_print_list(list->next);
		ft_putnbr_fd(list->value, 1);
		ft_putchar_fd('\n', 1);
	}
}

void	ft_filling_stack(int argc, char **argv)
{
	int		i;
	t_list	*list;

	i = 1;
	while (i < argc)
	{
		ft_create_list(&list, ft_atoi(argv[i++]));
	}
	ft_print_list(list);
}

void	push_swap(int argc, char **argv)
{
	ft_errors(argc, argv);
	ft_filling_stack(argc, argv);
}

int	main(int argc, char **argv)
{
	push_swap(argc, argv);
	return (0);
}
