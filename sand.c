/*

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

struct LIST {
	int number;
	struct LIST *next;
};

//-----------------------------------------------------------------------------
void Push(struct LIST** list, int number) {
	struct LIST* node = malloc(sizeof(struct LIST));
	node->number = number;
	node->next = *list;
	*list = node;
}
//-----------------------------------------------------------------------------
void Print(const struct LIST* list) {
	*/
/*if (list) {
		Print(list->next);
		printf("%d ", list->number);
	}*//*

	if (list)
	{
		Print(list->next);
		ft_putnbr_fd(list->number, 1);
		ft_putchar_fd('\n', 1);
	}
}
//-----------------------------------------------------------------------------

int main(int argc, char **argv)
{
	int i;
	struct LIST *list;

	i = 1;
	list = NULL;
	//printf("%d|\n", ft_atoi(argv[i]));
	while (i < argc)
	{
		Push(&list, ft_atoi(argv[i]));
		i++;
	}

	Print(list);
	Print(list);

	return 0;
}*/

/*
// C program for implementation of Bubble sort
#include <stdio.h>
#include "libft/libft.h"

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

void swap(int *xp, int *yp)
{
	int	temp = *xp;
	*xp = *yp;
	*yp = temp;
}

// A function to implement bubble sort
void	bubbleSort(int arr[], int n)
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

*/
/* Function to print an array *//*

void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// Driver program to test above functions
int	main(int argc, char **argv)
{
	int	*arr;

	arr = fill_array(argc, argv);
	bubbleSort(arr, argc - 1);
	printf("Sorted array: \n");
	printArray(arr, argc - 1);
	return 0;
}*/

#include <stdlib.h>
#include <stdio.h>

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

void	*fill_arr(int **ptr)
{
	int	i;

	i = 0;
	*ptr = malloc(10 * sizeof(int));
	while (i < 10)
	{
		(*ptr)[i] = i;
		i++;
	}
	return (0);
}

int	main(void)
{
	int	*arr;

	fill_arr(&arr);
	print_array(arr, 10);
}
