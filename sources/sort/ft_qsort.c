/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_quicksort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/24 15:29:20 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/25 18:43:02 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_flag_set(t_list **head)
{
	t_list	*tmp;

	tmp = *head;
	while (*head)
	{
		(*head)->sorted = 0;
		(*head) = (*head)->next;
	}
	*head = tmp;
}

void	ft_qsort(int argc, char **argv, t_list **stack_a, t_list **stack_b)
{
	int		*sup_arr;
	int		count_elem_in_b;
	int		pos_of_chunk;
	int		i;
	int	count_chunks;

	i = 0;
	count_chunks = support_elements(argc, argv, &sup_arr); //todo free(sup_arr)
	sort_flag_set(stack_a);
	free(sup_arr);
}
