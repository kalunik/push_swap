/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:18:36 by wjonatho          #+#    #+#             */
/*   Updated: 2021/10/01 23:15:57 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	errors(argc, argv);
	stack_b = NULL;
	stack_a = create_list(argc, argv);
	sorting(argc, argv, &stack_a, &stack_b);
	remove_all_elements(stack_a);
	remove_all_elements(stack_b);
}
