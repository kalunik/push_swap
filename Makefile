CC	=	gcc
RM	=	rm -f
CFLAGS	=	-Wall -Wextra -Werror -I./includes
NAME	=	push_swap
LIBFT	=	./libft
#LIBR	=	ar rcs
SRCS	=	push_swap.c \
			ft_errors.c \
			list_operations/remove_element.c \
			list_operations/add_element.c \
            push_swap_operations/swap.c

#OBJS	=	$(SRCS:.c=.o)

all:
			$(MAKE) -C $(LIBFT)
			$(MAKE) $(NAME)

$(NAME):	$(OBJS) $(LIBFT)/libft.a
			@cp $(LIBFT)/libft.a ./$(NAME)
			#@$(LIBR) $(NAME) $(OBJS)
			@echo "Success"

%.o: %.c
			@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@$(MAKE) -C $(LIBFT)/ clean
			@$(RM)	$(OBJS)
			@echo ".o Deleted"

fclean: 	clean
			@$(MAKE) -C $(LIBFT)/ fclean
			@$(RM)	$(NAME)
			@echo "Deleted"

re:			fclean all

.PHONY: all clean fclean re