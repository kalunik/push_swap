/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_errors.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:42:08 by wjonatho          #+#    #+#             */
/*   Updated: 2021/10/06 01:14:23 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static inline int	ft_overfilling(int i, char **argv)
{
	if (ft_strlen(argv[i]) > 10 || ft_atoi(argv[i]) != ft_long_atoi(argv[i]))
	{
		ft_putstr_fd("Error\n", 1);
		return (1);
	}
	return (0);
}

static inline int	ft_not_a_number(int *o, int *k, char **argv)
{
	int	i;
	int	j;

	i = *o;
	j = *k;
	while (argv[i][j])
	{
		if (!((argv[i][j] > '/' && argv[i][j] < ':') || argv[i][j] == '-'))
		{
			ft_putstr_fd("Error\n", 1);
			return (1);
		}
		j++;
	}
	*o = i;
	*k = j;
	return (0);
}

static inline int	ft_dublicates(int *o, int argc, char **argv)
{
	int	i;
	int	j;

	i = *o;
	j = i + 1;
	while (j < argc)
	{
		if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
		{
			ft_putstr_fd("Error\n", 1);
			return (1);
		}
		j++;
	}
	*o = i;
	return (0);
}

static inline int	ft_is_sorted(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[i + 1]))
			return (0);
		i++;
	}
	return (1);
}

void	errors(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i < argc)
	{
		if (ft_overfilling(i, argv))
			exit(0);
		if (ft_not_a_number(&i, &j, argv))
			exit(0);
		if (ft_dublicates(&i, argc, argv))
			exit(0);
		i++;
		j = 0;
	}
	if (ft_strncmp(argv[0], "./checker", 9))
	{
		if (ft_is_sorted(argc, argv))
			exit(0);
	}
}
