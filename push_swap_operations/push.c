/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:59:15 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/08 18:09:09 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	push_1st_from_src_stack_to_dst(t_list **src, t_list **dst)
{
	if (*dst)
		(*dst) = add_element_start((*src)->value, (*dst));
	else
		(*dst) = create_first_element((*src)->value);
	remove_first_element(src);
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	push_1st_from_src_stack_to_dst(stack_b, stack_a);
	write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	push_1st_from_src_stack_to_dst(stack_a, stack_b);
	write(1, "pb\n", 3);
}

/*
int		main()
{
	t_list	*src;
	t_list	*dst;

	src = create_first_element(2);
	add_element_end(52, src);
	add_element_end(100, src);
	dst = create_first_element(85);
	add_element_end(52, dst);
	print_list(src);
	print_list(dst);
	push_1st_from_src_stack_to_dst(&src, &dst);
	print_list(src);
	print_list(dst);
	return (0);
}
//  fixme delete comment
*/
