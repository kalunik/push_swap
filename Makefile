CC	=	gcc
RM	=	rm -f
CFLAGS	=	-I./includes #-Wall -Wextra -Werror -I./includes
PUSHLIB	=	push_swap.a
NAME	=	push_swap
LIBFT	=	./libft
LIBR	=	ar rcs
MAIN	=	main.c
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
            sources/sort/bubble_sort.c\
            sources/sort/small_element_sort.c\
            sources/sort/sort_algorithm.c\
            sources/sort/support_elements_for_quicksort.c\
            sources/sort/three_element_sort.c\
            sources/sort/two_element_sort.c\
            sources/errors.c\
            sources/fill_array.c\
            sources/push_swap.c

OBJS	=	$(SRCS:.c=.o)

all:
			$(MAKE) -C $(LIBFT)
			$(MAKE) $(PUSHLIB)
			$(MAKE) $(NAME)

$(NAME):
			@$(CC) -o $(NAME) $(PUSHLIB) $(MAIN)
			@echo "push_swap is ready to use"

$(PUSHLIB):		$(OBJS) $(LIBFT)/libft.a
			@cp $(LIBFT)/libft.a ./$(PUSHLIB)
			@$(LIBR) $(PUSHLIB) $(OBJS)

%.o: %.c
			@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@$(MAKE) -C $(LIBFT)/ clean
			@$(RM)	$(OBJS)
			@echo ".o Deleted"

fclean: 	clean
			@$(MAKE) -C $(LIBFT)/ fclean
			@$(RM)	$(PUSHLIB) $(NAME)
			@echo "Deleted"

re:			fclean all

.PHONY: all clean fclean re