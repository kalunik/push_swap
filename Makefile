CC	=	gcc
RM	=	rm -f
CFLAGS	=	-I./includes -Wall -Wextra -Werror
NAME	=	push_swap
LIBFT	=	./libft
SRCS	=	sources/list_operations/add_element.c\
            sources/list_operations/create_list.c\
            sources/list_operations/element_position_in_list.c\
            sources/list_operations/element_to_top.c\
            sources/list_operations/ft_listlen.c\
            sources/list_operations/print_list.c\
            sources/list_operations/remove_element.c\
            sources/push_swap_operations/push.c\
            sources/push_swap_operations/reverse_rotate.c\
            sources/push_swap_operations/rotate.c\
            sources/push_swap_operations/swap.c\
            sources/sort_supply/bubble_sort.c\
            sources/sort_supply/big_element_sort.c\
            sources/sort_supply/small_element_sort.c\
            sources/sort_supply/three_element_sort.c\
            sources/sort_supply/two_element_sort.c\
            sources/errors.c\
            sources/fill_array.c\
            sources/push_swap.c\
            sources/sort_algorithm.c\
            main.c

OBJS	=	$(patsubst %.c, %.o, $(SRCS))

all:
			@$(MAKE) -C $(LIBFT)
			@$(MAKE) $(NAME)

$(NAME):	$(OBJS)
			@$(CC) -o $(NAME) $(OBJS) $(LIBFT)/libft.a
			@echo "push_swap is ready to use 😀"

%.o: %.c
			@$(CC) $(CFLAGS) -c $< -o $@


clean:
			@$(MAKE) -C $(LIBFT)/ clean
			@$(RM)	$(OBJS)
			@echo ".o Deleted 🙄"

fclean: 	clean
			@$(MAKE) -C $(LIBFT)/ fclean
			@$(RM)	 $(NAME)
			echo "Deleted 😬"

re:			fclean all

.PHONY: all clean fclean re