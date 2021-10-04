/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:42:23 by wjonatho          #+#    #+#             */
/*   Updated: 2021/10/04 19:01:34 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include "../libft/libft.h"
# include "../get_next_line/get_next_line.h"

typedef struct s_Node{
	struct s_Node	*next;
	int				value;
	int				index;
}	t_list;

t_list		*add_element_start(int data, t_list *head);
void		add_element_end(int data, t_list *head);

t_list		*create_first_element(int data);
t_list		*create_list(int argc, char **argv);

int			find_max(t_list *list);
int			find_max_index(t_list *list);
int			find_min(t_list *list);
int			index_pos_in_list(int value, t_list *list);
int			elem_pos_in_list(int value, t_list *list);

void		element_to_top(int argc, int position_of_element, t_list **list);

size_t		ft_listlen(t_list *head);

void		print_list(t_list *list);

void		remove_all_elements(t_list *head);
void		remove_first_element(t_list **head);
void		remove_last_element(t_list **head);

void		pa(t_list **stack_b, t_list **stack_a);
void		pb(t_list **stack_a, t_list **stack_b);

void		rra(t_list **stack_a);
void		rrb(t_list **stack_b);
void		rrr(t_list **stack_a, t_list **stack_b);

void		ra(t_list **stack_a);
void		rb(t_list **stack_b);
void		rr(t_list **stack_a, t_list **stack_b);

void		sa(t_list **stack_a);
void		sb(t_list **stack_b);
void		ss(t_list **stack_a, t_list **stack_b);

void		big_elem_srt(int argc, char **argv, t_list **st_a, t_list **st_b);
void		bubble_sort(int *arr, int n);
void		small_element_sort(int argc, t_list **stack_a, t_list **stack_b);
void		three_element_sort(t_list **stack_a);
void		two_element_sort(t_list **stack_a);

void		errors(int argc, char **argv);
int			*fill_array(int argc, char **argv);
void		push_swap(int argc, char **argv);
void		sorting(int argc, char **argv, t_list **stack_a, t_list **stack_b);

void		checker(int argc, char **argv);
long long	ft_long_atoi(const char *str);

#endif