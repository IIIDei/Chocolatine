##
## EPITECH PROJECT, 2022
## makefile
## File description:
## makefile
##

SRC =	src/tools/my_putchar.c	\
		src/tools/my_putstr.c	\
		src/tools/my_put_nbr.c	\
		src/tools/my_strlen.c	\
		src/tools/my_str_isnum.c	\
		src/tools/my_get_nbr.c	\
		src/printf/my_printf.c	\
		src/printf/int_conv.c	\
		src/pushswap/error_handling.c	\
		src/pushswap/deallocate.c	\
		src/pushswap/list_filling.c	\
		src/pushswap/print_list.c	\
		src/pushswap/operation/swap.c	\
		src/pushswap/operation/first_to_last.c	\
		src/pushswap/operation/last_to_first.c	\
		src/pushswap/operation/move_first_lists.c	\
		src/pushswap/operation/exchange_error.c	\
		src/pushswap/algo.c	\
		src/pushswap/get.c	\
		push_swap.c

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

CFLAGS = -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)

clean:
	rm -f $(OBJ)
	find -name "*.gc*" -delete

fclean:	clean
	rm -f $(NAME) lib_testing

re:	fclean all

compile_tests:
		gcc -o lib_testing $(SRC) tests/lib_tests.c \
		$(CPPFLAGS) -lcriterion

tests_run:	compile_tests	\
			./lib_testing

.PHONY = re fclean clean all compile_tests tests_run
