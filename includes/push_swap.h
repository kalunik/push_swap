/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:42:23 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/07 16:10:30 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include "libft.h"

typedef struct s_Node{
	int				value;
	struct s_Node	*next;
}	t_list;

t_list	*create_first_element(int data);
t_list	*add_element_start(int data, t_list *head);
void	add_element_end(int data, t_list *head);

void	print_list(t_list *list);

void	remove_all_elements(t_list *head);
void	remove_first_element(t_list **head);
void	remove_last_element(t_list **head);

void	push_1st_from_src_stack_to_dst(t_list **src, t_list **dst);

void	reverse_rotate(t_list **head);

void	rotate(t_list **head);

void	swap_first_two_elements(t_list **head);

void	errors(int argc, char **argv);

void	push_swap(int argc, char **argv);

#endif