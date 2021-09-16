/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wjonatho <wjonatho@student.21-school.ru>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 13:18:36 by wjonatho          #+#    #+#             */
/*   Updated: 2021/09/16 15:40:23 by wjonatho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
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

int	*bubble_sort(int argc, char **argv)
{
	int	i;
	int	j;
	int	sorted;
	int	*arr;

	i = 0;
	sorted = 0;
	arr = fill_array(argc, argv);
	j = i + 1;
	while (sorted < argc - 1)
	{
		while (arr[i] > arr[j])
		{
			swap(&arr[i], &arr[j]);
			i++;
			j = i + 1;
		}
		i = 0;
		j = i + 1;
		if (arr[i] < arr[j])
			sorted++;
	}
	return (arr);
}

void	find_support_elements(int argc, char **argv)
{
	int	i;
	int	*arr;

	i = 0;
	//arr = fill_array(argc, argv);
	arr = bubble_sort(argc, argv);
	while (arr[i])
	{
		printf("\n arr[%d] = %d\n", i, arr[i]);
		i++;
	}
}

void	ft_filling_stack(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
/*	int i;
	int	*arr;*/

	//i = 0;
	stack_a = create_list(argc, argv);
	find_support_elements(argc, argv);
	//print_list(stack_a);
	/*arr = fill_array(argc, argv);
	while (i < argc)
	{
		printf("\n arr[%d] = %d\n", i, arr[i]);
		i++;
	}*/

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

