/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:18:36 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/06 17:29:26 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

void	ft_filling_stack(int argc, char **argv)
{
	int		i;
	t_list	*stack_a;

	i = 1;
	stack_a = create_first_element(ft_atoi(argv[i++]));
	while (i < argc)
	{
		add_element_end(ft_atoi(argv[i++]), stack_a);
	}
	print_list(stack_a);
	swap_first_two_elements(&stack_a);
	print_list(stack_a);
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
