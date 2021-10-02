/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 18:34:09 by wjonatho          #+#    #+#             */
/*   Updated: 2021/10/02 21:04:20 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	wrong_command(char *command)
{
	if (ft_strncmp(command, "pa", 2))
		return (1);
	else if (ft_strncmp(command, "pb", 2))
		return (1);
	else if (ft_strncmp(command, "rra", 3))
		return (1);
	else if (ft_strncmp(command, "rrb", 3))
		return (1);
	else if (ft_strncmp(command, "rrr", 3))
		return (1);
	else if (ft_strncmp(command, "ra", 2))
		return (1);
	else if (ft_strncmp(command, "rb", 2))
		return (1);
	else if (ft_strncmp(command, "rr", 2))
		return (1);
	else if (ft_strncmp(command, "sa", 2))
		return (1);
	else if (ft_strncmp(command, "sb", 2))
		return (1);
	else if (ft_strncmp(command, "ss", 2))
		return (1);
	return (0);
}

void	apply_command(char *command)
{
	printf("%d", !ft_strncmp(command, "pa", 2));
	if (wrong_command(command))
		exit(0);
	write(1, "w1784683674!!!\n", 16);
}

void	checker(int argc, char **argv)
{
	errors(argc, argv);
}

int	main(int argc, char **argv)
{
	int		fd;
	char	*command;

	fd = 1;
	printf("%lld -- long atoi\n", ft_long_atoi(argv[1]));
	while (fd > 0)
	{
		fd = get_next_line(fd, &command);
		apply_command(command); //free?
	}
	checker(argc, argv);
	return (0);
}
