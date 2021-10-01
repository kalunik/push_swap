/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element_to_top.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 14:07:17 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/14 14:07:17 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	element_to_top(int argc, int position_of_element, t_list **list)
{
	int	i;

	i = 1;
	if (position_of_element > (argc / 2))
	{
		while (i++ <= (argc - position_of_element))
			rra(list);
	}
	else
	{
		while (i++ < position_of_element)
			ra(list);
	}
}
