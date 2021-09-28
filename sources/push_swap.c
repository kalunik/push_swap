/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:18:36 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/28 20:09:37 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_filling_stack(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = create_list(argc, argv);
	//print_list(stack_a);
	sorting(argc, argv, &stack_a, &stack_b);
	//print_list(stack_a);
}

void	ft_is_sorted(int argc, char **argv)
{
	int	i;
	int	unsorted_flag;

	i = 1;
	unsorted_flag = 0;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[i + 1]))
			unsorted_flag++;
		i++;
	}
	if (unsorted_flag == 0)
		exit (0);
}

void	push_swap(int argc, char **argv)
{
	errors(argc, argv);
	ft_is_sorted(argc, argv);
	ft_filling_stack(argc, argv);
}
