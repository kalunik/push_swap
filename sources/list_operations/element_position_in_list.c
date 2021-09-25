/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 13:41:47 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/24 18:00:24 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	find_max(t_list *list)
{
	int	max;
	int	number;

	max = list->value;
	while (list)
	{
		number = list->value;
		if (number > max)
			max = number;
		list = list->next;
	}
	return (max);
}

int	find_min(t_list *list)
{
	int	min;
	int	number;

	min = list->value;
	while (list)
	{
		number = list->value;
		if (number < min)
			min = number;
		list = list->next;
	}
	return (min);
}

int	element_pos_in_list(int value, t_list *list)
{
	int	position;
	int	number;

	position = 1;
	while (list)
	{
		number = list->value;
		if (value == number)
			return (position);
		list = list->next;
		position++;
	}
	return (0);
}
