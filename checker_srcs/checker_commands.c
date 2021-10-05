/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_supply.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 01:23:07 by wjonatho          #+#    #+#             */
/*   Updated: 2021/10/06 01:23:07 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static inline void	together_reverse_rotate(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}

static inline void	together_rotate(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

static inline void	together_swap(t_list **stack_a, t_list **stack_b)
{
	swap_1st_two_elements(stack_a);
	swap_1st_two_elements(stack_b);
}

int	right_command(char *command)
{
	if (!ft_strncmp(command, "pa\0", 3))
		return (1);
	else if (!ft_strncmp(command, "pb\0", 3))
		return (1);
	else if (!ft_strncmp(command, "rra\0", 4))
		return (1);
	else if (!ft_strncmp(command, "rrb\0", 4))
		return (1);
	else if (!ft_strncmp(command, "rrr\0", 4))
		return (1);
	else if (!ft_strncmp(command, "ra\0", 3))
		return (1);
	else if (!ft_strncmp(command, "rb\0", 3))
		return (1);
	else if (!ft_strncmp(command, "rr\0", 3))
		return (1);
	else if (!ft_strncmp(command, "sa\0", 3))
		return (1);
	else if (!ft_strncmp(command, "sb\0", 3))
		return (1);
	else if (!ft_strncmp(command, "ss\0", 3))
		return (1);
	return (0);
}

void	apply_command(char *command, t_list **stack_a, t_list **stack_b)
{
	if (!ft_strncmp(command, "pa\0", 3))
		push_1st_from_src_stack_to_dst(stack_b, stack_a);
	else if (!ft_strncmp(command, "pb\0", 3))
		push_1st_from_src_stack_to_dst(stack_a, stack_b);
	else if (!ft_strncmp(command, "rra\0", 4))
		reverse_rotate(stack_a);
	else if (!ft_strncmp(command, "rrb\0", 4))
		reverse_rotate(stack_b);
	else if (!ft_strncmp(command, "rrr\0", 4))
		together_reverse_rotate(stack_a, stack_b);
	else if (!ft_strncmp(command, "ra\0", 3))
		rotate(stack_a);
	else if (!ft_strncmp(command, "rb\0", 3))
		rotate(stack_b);
	else if (!ft_strncmp(command, "rr\0", 3))
		together_rotate(stack_a, stack_b);
	else if (!ft_strncmp(command, "sa\0", 3))
		swap_1st_two_elements(stack_a);
	else if (!ft_strncmp(command, "sb\0", 3))
		swap_1st_two_elements(stack_b);
	else if (!ft_strncmp(command, "ss\0", 3))
		together_swap(stack_a, stack_b);
}
