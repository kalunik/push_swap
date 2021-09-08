/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:18:36 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/08 18:36:44 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_filling_stack(int argc, char **argv)
{
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;

	i = 1;
	stack_a = create_first_element(ft_atoi(argv[i++]));
	while (i < argc)
	{
		add_element_end(ft_atoi(argv[i++]), stack_a);
	}
	print_list(stack_a);
	sort_algorithm(argc, &stack_a, &stack_b);
	print_list(stack_a);
	/*print_list(stack_a);
	ft_putstr_fd("\n swap:			",1);
	swap_first_two_elements(&stack_a);
	print_list(stack_a);
	ft_putstr_fd("\n rotate:		",1);
	rotate(&stack_a);
	print_list(stack_a);
	ft_putstr_fd("\n reverse rotate:	",1);
	reverse_rotate(&stack_a);
	print_list(stack_a);
	ft_putstr_fd("\n remove last elem:	",1);
	remove_last_element(&stack_a);
	print_list(stack_a);*/
}

void	push_swap(int argc, char **argv)
{
	errors(argc, argv);
	ft_filling_stack(argc, argv);
}

