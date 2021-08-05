#include "includes/push_swap.h"

static void	ft_errors(int argc, char **argv)
{
	int	i;
	int	j;
	static int	args[4294967295];
/*	unsigned int index;

	int	*p;*/

	i = 1;
	j = 0;
	/*index = 0;
	while (index < 4294967295)
		args[index++] = 0;
	p = &args[2147483648];*/
	while (i <= argc)
	{
		printf("%d -- %d\n", i, j);
		while (argv[i][j])
		{
			if (!((argv[i][j] > '/' && argv[i][j] < ':') || argv[i][j] == '-'))
			{
				ft_putstr_fd("Error\n", 1);
				exit(0);

			}
			j++;
		}
		//printf("%d", p[1]);
		//ft_atoi()
		i++;
		j = 0;
	}
}

void		push_swap(int argc, char **argv)
{
	ft_errors(argc, argv);
}

int			main(int argc, char **argv)
{
	printf("%d\n", argc);
	push_swap(argc, argv);
	return (0);
}