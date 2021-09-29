/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:42:23 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/29 20:39:20 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct s_Node{
	int				value;
	struct s_Node	*next;
	int				index;
}			t_list;

t_list	*add_element_start(int data, t_list *head);
void	add_element_end(int data, t_list *head);

t_list	*create_first_element(int data);
t_list	*create_list(int argc, char **argv);

int		find_max(t_list *list);
int		find_min(t_list *list);
int		elem_pos_in_list(int value, t_list *list);

void	element_to_top(int argc, int position_of_element, t_list **list);

size_t	ft_listlen(t_list *head);

void	print_list(t_list *list);

void	remove_all_elements(t_list *head);
void	remove_first_element(t_list **head);
void	remove_last_element(t_list **head);

void	pa(t_list **stack_b, t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);

void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);

void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);

void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);

void	errors(int argc, char **argv);

int		*fill_array(int argc, char **argv);

void	ft_filling_stack(int argc, char **argv);
void	push_swap(int argc, char **argv);

void	big_elem_srt(int argc, char **argv, t_list **stack_a, t_list **stack_b);
void	bubble_sort(int *arr, int n);
void	small_element_sort(int argc, t_list **stack_a, t_list **stack_b);
void	sorting(int argc, char **argv, t_list **stack_a, t_list **stack_b);
int		support_elements(int argc, char **argv, int *arr, int **sup_arr);
void	three_element_sort(t_list **stack_a);
void	two_element_sort(t_list **stack_a);

#endif