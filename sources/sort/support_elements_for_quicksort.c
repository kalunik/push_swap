/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   support_elements_for_quicksort.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 17:41:04 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/27 20:32:37 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_array(int *arr, int n) //fixme запрещённая функция
{
	int	i;

	i = 0;
	printf("[index] - number\n________________\n");
	while (i < n)
	{
		printf("[%d] – %d\n", i, arr[i]);
		i++;
	}
	printf("________________\n");
}

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
	int	*sup_elems_index;
	int	count_chunks;

	i = 0;
	sup_index = chunk_size;
	count_chunks = n / chunk_size;
	sup_elems_index = ft_calloc(count_chunks, sizeof(int));
	while (i < count_chunks)
	{
		sup_elems_index[i] = sup_index;
		if (sup_index < n)
			sup_index += chunk_size;
		if (n - sup_index < chunk_size)
			sup_index += n - sup_index;
		i++;
	}
	return (sup_elems_index);
}

void	*num_from_index(int *sorted, int *sup_elem_index, int i, int **sup_arr)
{
	int	j;

	j = 0;
	*sup_arr = ft_calloc(i, sizeof(int));
	while (j < i)
	{
		(*sup_arr)[j] = sorted[sup_elem_index[j] - 1];
		j++;
	}
	return (0);
}

int	find_support(int *sorted_arr, int n, int **sup_arr)
{
	int	*sup_elem_index;
	int	chunk_size;

	chunk_size = find_chunk_size(n);
	if (chunk_size < n)
	{
		printf("%d - - chunk size\n", chunk_size);
		sup_elem_index = find_sup_elem_index(chunk_size, n);
		printf("sup elem index !!!\n");
		print_array(sup_elem_index, n / chunk_size);
		num_from_index(sorted_arr, sup_elem_index, n / chunk_size, sup_arr);
		free(sup_elem_index);
		printf("sup arr !!!\n");
		print_array(*sup_arr, n / chunk_size);
		return (n / chunk_size);
	}
	return (0);
}

int	support_elements(int argc, char **argv, int *arr, int **sup_arr)
{
	int	count_chunks;

	//print_array(arr, argc - 1);
	count_chunks = find_support(arr, argc - 1, sup_arr);
	return (count_chunks);
}
