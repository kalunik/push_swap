/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 17:59:15 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/06 18:35:02 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push_1st_from_src_stack_to_dst(t_list **src, t_list **dst)
{
	if (*dst)
		(*dst) = add_element_start((*src)->value, (*dst));
	else
		(*dst) = create_first_element((*src)->value);
	remove_first_element(src);
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
