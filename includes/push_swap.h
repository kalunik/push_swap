#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct s_Node{
	int				data;
	struct s_Node	*next;
}	t_stack;

void	ft_errors(int argc, char **argv);
void	push_swap(int argc, char **argv);

#endif