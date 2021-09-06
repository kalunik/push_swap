
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
	/*if (list) {
		Print(list->next);
		printf("%d ", list->number);
	}*/
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
}