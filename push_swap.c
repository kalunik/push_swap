#include "includes/push_swap.h"

void ft_filling_stack(int argc, char **argv)
{
	t_stack *a;
	a = (t_stack*)malloc(sizeof(t_stack));

}

void	push_swap(int argc, char **argv)
{
	ft_errors(argc, argv);
	ft_filling_stack(argc, argv);
}

int	main(int argc, char **argv)
{
	push_swap(argc, argv);
	return (0);
}
