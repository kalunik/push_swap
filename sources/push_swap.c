/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:18:36 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/23 17:12:55 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	*fill_array(int argc, char **argv)
{
	int	*arr;
	int	i;

	i = 1;
	arr = ft_calloc(argc, sizeof(int));
	while (i < argc)
	{
		arr[i - 1] = ft_atoi(argv[i]);
		i++;
	}
	return (arr);
}

void	bubble_sort(int arr[], int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n - 1)
	{
		j = 0;
		while (j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
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

void	*find_sup_elem_index(int **sup_elem_index, int chunk_size, int n)
{	i = 0;
	sup_index = chunk_size;
	while (i < n / chunk_size - 1)
	{
		index[i] = sup_index;
		if (sup_index < n)
			sup_index += sup_index;
		i++;
	}
}

int	*find_support(int *sorted_arr, int n)
{
	int	*sup_arr;
	int	*sup_elem_index;
	int	chunk_size;

	chunk_size = find_chunk_size(n);
	sup_elem_index = ft_calloc((n / chunk_size - 1), sizeof(int));
	find_chunk_size(*sup_elem_index, chunk_size, n);
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
}

void	ft_filling_stack(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int	*sup;

	stack_a = create_list(argc, argv);
	//print_list(stack_a);
	sup = support_elements(argc, argv);
	sort_algorithm(argc, &stack_a, &stack_b);
	//print_list(stack_a);
}

void	ft_is_sorted(int argc, char **argv)
{
	int	i;
	int	unsorted_flag;

	i = 1;
	unsorted_flag = 0;
	while (i < argc - 1)
	{
		if (ft_atoi(argv[i]) > ft_atoi(argv[i + 1]))
			unsorted_flag++;
		i++;
		write(1, &i, 2);
	}
	if (unsorted_flag == 0)
		exit(0);
}

void	push_swap(int argc, char **argv)
{
	errors(argc, argv);
	ft_is_sorted(argc, argv);
	ft_filling_stack(argc, argv);
}
