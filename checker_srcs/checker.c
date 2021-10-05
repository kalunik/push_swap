/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:34:09 by wjonatho          #+#    #+#             */
/*   Updated: 2021/10/05 18:59:05 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

void	together_reverse_rotate(t_list **stack_a, t_list **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}

void	together_rotate(t_list **stack_a, t_list **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}

void	together_swap(t_list **stack_a, t_list **stack_b)
{
	swap_1st_two_elements(stack_a);
	swap_1st_two_elements(stack_b);
}

void	apply_command(char *command, t_list **stack_a, t_list **stack_b)
{
	if (!right_command(command))
		exit(0);
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

static inline int	list_is_sorted(int argc, t_list *head)
{
	int	i;

	i = 1;
	//printf("%zu -- size, argc -- %d\n", ft_listlen(head), argc);
	if (ft_listlen(head) != (argc - 1))
	{
		ft_putstr_fd("KO", 1);
		return (0);
	}
	//print_list(head);
	while (head->next)
	{
		//print_list(head);
		if (head->value > head->next->value)
			return (0);
		head = head->next;
	}
	return (1);
}

void	checker(int argc, char **argv)
{
	int		fd;
	char	*command;
	t_list	*stack_a;
	t_list	*stack_b;

	//ft_putstr_fd("\nOK", 1);
	fd = 1;
	stack_a = create_list(argc, argv);
	stack_b = NULL;
	while (get_next_line(0, &command))
	{
		apply_command(command, &stack_a, &stack_b);
		free(command);
	}
	//apply_command(command, &stack_a, &stack_b);
	free(command);
	if (list_is_sorted(argc, stack_a))
		ft_putstr_fd("OK\n", 1);
	else
		ft_putstr_fd("KO\n", 1);
	remove_all_elements(stack_a);
	remove_all_elements(stack_b);
}

int	main(int argc, char **argv)
{
	errors(argc, argv);
	//printf("%lld -- long atoi\n", ft_long_atoi(argv[1]));
	checker(argc, argv);
	return (0);
}
