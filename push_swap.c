#include "includes/push_swap.h"

int	ft_dublicate(int i, char **argv)
{
	static int		dubl[4294967295];
	unsigned int	index;
	int				*p;

	index = 0;
	while (index < 4294967295)
		dubl[index++] = 0;
	p = &dubl[2147483648];
	if (p[ft_atoi(argv[i])])
	{
		ft_putstr_fd("Error\n", 1);
		return (0);
	}
	else
	{
		p[ft_atoi(argv[i])] = 1;
		return (1);
	}
	return (520);
}

void	ft_errors(int argc, char **argv)
{
	int	i;
	int	j;
	int	ans;

	i = 1;
	j = 0;
	while (i <= argc)
	{
		while (argv[i][j])
		{
			if (!((argv[i][j] > '/' && argv[i][j] < ':') || argv[i][j] == '-'))
			{
				ft_putstr_fd("Error\n", 1);
				exit(0);
			}
			j++;
		}
		ans = ft_dublicate(i, argv);
		printf("ans -- %d", ans);
		if (ans == 0)
			exit(0);
		i++;
		j = 0;
	}
}

void	push_swap(int argc, char **argv)
{
	ft_errors(argc, argv);
}

int	main(int argc, char **argv)
{
	push_swap(argc, argv);
	return (0);
}
