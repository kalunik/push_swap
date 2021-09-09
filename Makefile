CC	=	gcc
RM	=	rm -f
CFLAGS	=	-Wall -Wextra -Werror -I./includes
PUSHLIB	=	push_swap.a
NAME	=	push_swap
LIBFT	=	./libft
LIBR	=	ar rcs
MAIN	=	main.c
SRCS	=	list_operations/add_element.c\
            list_operations/ft_listlen.c\
            list_operations/print_list.c\
            list_operations/remove_element.c\
            push_swap_operations/push.c\
            push_swap_operations/reverse_rotate.c\
            push_swap_operations/rotate.c\
            push_swap_operations/swap.c\
            errors.c\
            push_swap.c\
            sort_algorithm.c

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