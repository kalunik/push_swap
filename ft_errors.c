#include "includes/push_swap.h"

static int	ft_not_a_number(int *o, int *k, char **argv)
{
	int	i;
	int	j;

	i = *o;
	j = *k;
	while (argv[i][j])
	{
		if (!((argv[i][j] > '/' && argv[i][j] < ':') || argv[i][j] == '-'))
		{
			//printf("\nwrong char at argv[%d] -- %s\n", i, argv[i]); //TODO
			ft_putstr_fd("Error\n", 1);
			return (1);
		}
		j++;
	}
	*o = i;
	*k = j;
	return (0);
}

static int	ft_dublicates(int *o, int argc, char **argv)
{
	int	i;
	int	j;

	i = *o;
	j = i + 1;
	while (j < argc)
	{
		if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
		{
			//printf("\ndublicate at argv[%d] -- %s\n", j, argv[j]); //TODO
			ft_putstr_fd("Error\n", 1);
			return (1);
		}
		j++;
	}
	*o = i;
	return (0);
}

void	ft_errors(int argc, char **argv)
{
	int	i;
	int	j;
	int	bool;

	i = 1;
	j = 0;
	while (i < argc)
	{
		bool = ft_not_a_number(&i, &j, argv);
		if (bool)
			exit(0);
		bool = ft_dublicates(&i, argc, argv);
		if (bool)
			exit(0);
		i++;
		j = 0;
	}
}