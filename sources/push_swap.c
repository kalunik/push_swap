/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:18:36 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/22 17:37:37 by wjonatho         ###   ########.fr       */
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

int	*find_support(int *sorted_arr, int n)
{
	int	*sup_arr;
	int	*index;
	int	chunk_size;

	chunk_size = n;
	while (chunk_size >= 10)
	{
		if (chunk_size >= 10 && chunk_size < 20)
			break ;
		index[] = chunk_size / 2;
	}
	sup_arr = ft_calloc(, sizeof(int));
}

int	*support_elements(int argc, char **argv)
{
	int	i;
	int	*arr;
	int	*sup_arr;

	i = 0;
	arr = fill_array(argc, argv);
	bubble_sort(arr, argc - 1);
	while (i < argc - 1)
	{
		printf("\n arr[%d] = %d\n", i, arr[i]);
		i++;
	}
	sup_arr = find_support(arr, argc - 1);
}

void	ft_filling_stack(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int	*sup;

	stack_a = create_list(argc, argv);
	sup = support_elements(argc, argv);
	sort_algorithm(argc, &stack_a, &stack_b);
	print_list(stack_a);
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
