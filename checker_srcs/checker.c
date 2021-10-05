/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:34:09 by wjonatho          #+#    #+#             */
/*   Updated: 2021/10/06 02:24:32 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static inline int	list_is_sorted(int argc, t_list *head)
{
	if ((int)ft_listlen(head) != (argc - 1))
	{
		ft_putstr_fd("KO\n", 1);
		exit (0);
	}
	while (head->next)
	{
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	checker(int argc, char **argv)
{
	int		fd;
	char	*command;
	t_list	*stack_a;
	t_list	*stack_b;

	fd = 1;
	stack_a = create_list(argc, argv);
	stack_b = NULL;
	while (get_next_line(0, &command))
	{
		if (!right_command(command))
		{
			ft_putstr_fd("Error\n", 1);
			exit(0);
		}
		apply_command(command, &stack_a, &stack_b);
		free(command);
	}
	free(command);
	if (list_is_sorted(argc, stack_a))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	remove_all_elements(stack_a);
	remove_all_elements(stack_b);
}

int	main(int argc, char **argv)
{
	errors(argc, argv);
	checker(argc, argv);
	return (0);
}
