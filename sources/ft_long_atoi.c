/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_long_atoi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 21:02:06 by wjonatho          #+#    #+#             */
/*   Updated: 2021/10/02 21:04:20 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_is_space(char s)
{
	if (s == '\t' || s == '\n' || s == '\v'
		|| s == '\f' || s == '\r' || s == ' ')
		return (1);
	else
		return (0);
}

static int	ft_is_digit(char d)
{
	if ('0' <= d && d <= '9')
		return (1);
	else
		return (0);
}

long long	ft_long_atoi(const char *str)
{
	int			i;
	long long	sign;
	long long	number;

	i = 0;
	sign = 1;
	number = 0;
	while (ft_is_space(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_is_digit(str[i]) && str[i] != '\0')
	{
		number = number * 10;
		number = number + (sign * (str[i] - '0'));
		i++;
	}
	return (number);
}
