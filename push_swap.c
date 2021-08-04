#include "includes/push_swap.h"

static void	ft_errors(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (i <= argc)
	{
		while (argv[i][j])
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				ft_putstr_fd("Error\n", 1);
				exit(0);
			}
			j++;
		}
		i++;
		j = 0;
	}
}

void		push_swap(int argc, char **argv)
{
	ft_errors(int argc, char **argv);
}

int			main(int argc, char **argv)
{
	push_swap(int argc, char **argv);
	return (0);
}