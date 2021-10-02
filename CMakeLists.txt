cmake_minimum_required(VERSION 3.20)
project(push_swap LANGUAGES C)

set(CMAKE_C_STANDARD 11)

include_directories(includes/)

add_executable(
        push_swap
        libft/ft_atoi.c
        libft/ft_bzero.c
        libft/ft_calloc.c
        libft/ft_isalnum.c
        libft/ft_isalpha.c
        libft/ft_isascii.c
        libft/ft_isdigit.c
        libft/ft_isprint.c
        libft/ft_itoa.c
        libft/ft_memccpy.c
        libft/ft_memchr.c
        libft/ft_memcmp.c
        libft/ft_memcpy.c
        libft/ft_memmove.c
        libft/ft_memset.c
        libft/ft_putchar_fd.c
        libft/ft_putendl_fd.c
        libft/ft_putnbr_fd.c
        libft/ft_putstr_fd.c
        libft/ft_split.c
        libft/ft_strchr.c
        libft/ft_strdup.c
        libft/ft_strjoin.c
        libft/ft_strlcat.c
        libft/ft_strlcpy.c
        libft/ft_strlen.c
        libft/ft_strmapi.c
        libft/ft_strncmp.c
        libft/ft_strnstr.c
        libft/ft_strrchr.c
        libft/ft_strtrim.c
        libft/ft_substr.c
        libft/ft_tolower.c
        libft/ft_toupper.c

        sources/list_operations/add_element.c
        sources/list_operations/create_list.c
        sources/list_operations/element_position_in_list.c
        sources/list_operations/element_to_top.c
        sources/list_operations/ft_listlen.c
        sources/list_operations/print_list.c
        sources/list_operations/remove_element.c
        sources/push_swap_operations/push.c
        sources/push_swap_operations/reverse_rotate.c
        sources/push_swap_operations/rotate.c
        sources/push_swap_operations/swap.c
        sources/sort_supply/big_element_sort.c
        sources/sort_supply/bubble_sort.c
        sources/sort_supply/small_element_sort.c
        sources/sort_supply/three_element_sort.c
        sources/sort_supply/two_element_sort.c
        sources/errors.c
        sources/fill_array.c
        sources/push_swap.c
        sources/sort_algorithm.c
        main.c
        checker_srcs_src/checker.c includes/checker.h checker_srcs/ft_long_atoi.c)
