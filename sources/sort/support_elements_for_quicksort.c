/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support_elements_for_quicksort.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:41:04 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/23 18:34:57 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_chunk_size(int n)
{
	int	chunk_size;

	chunk_size = n;
	while (chunk_size >= 10)
	{
		if (chunk_size >= 10 && chunk_size < 20)
			break ;
		chunk_size = chunk_size / 2;
	}
	return (chunk_size);
}

int	*find_sup_elem_index(int chunk_size, int n)
{
	int	i;
	int	sup_index;
	int	*sup_elem_index;

	i = 0;
	sup_index = chunk_size;
	sup_elem_index = ft_calloc((n / chunk_size - 1), sizeof(int));
	while (i < n / chunk_size - 1)
	{
		sup_elem_index[i] = sup_index;
		if (sup_index < n)
			sup_index += sup_index;
		i++;
	}
	return (sup_elem_index);
}

int	*num_from_index(int *sorted_arr, int *sup_elem_index, int i)
{
	int	j;
	int	*sup_arr;

	j = 0;
	sup_arr = ft_calloc(i, sizeof(int));
	while (j < i)
	{
		sup_arr[j] = sorted_arr[sup_elem_index[j]];
		printf("sup_arr[%d] == %d\n", j, sup_arr[j]);
		j++;
	}
	return (sup_arr);
}

int	*find_support(int *sorted_arr, int n)
{
	int	*sup_arr;
	int	*sup_elem_index;
	int	chunk_size;

	chunk_size = find_chunk_size(n);
	sup_elem_index = find_sup_elem_index(chunk_size, n);
	sup_arr = num_from_index(sorted_arr, sup_elem_index, n / chunk_size - 1);
	return (sup_arr);
}

int	*support_elements(int argc, char **argv)
{
	int	i;
	int	*arr;
	int	*sup_arr;

	i = 0;
	arr = fill_array(argc, argv);
	bubble_sort(arr, argc - 1);
/*	while (i < argc - 1)
	{
		printf("\n arr[%d] = %d\n", i, arr[i]);
		i++;
	}*/
	sup_arr = find_support(arr, argc - 1);
	return (sup_arr);
}
