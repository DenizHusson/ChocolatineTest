##
## EPITECH PROJECT, 2022
## repo_template
## File description:
## Makefile
##


SRC     =		src/dialog_parsing.c 	\
				src/dialog_str_array.c

MAIN 	= 		src/main.c

TESTS 	=

OBJ     =       $(SRC:.c=.o)

NAME    =		my_rpg

CC 		= 		gcc

CFLAGS 	= 		-Wall -Wextra -g3

CPPFLAGS =		-iquote includes

LFLAG	=		./lib/my/libmy.a ./lib/chainedList/libchainedlist.a

all:    $(NAME)

$(NAME):		SRC += $(MAIN)
$(NAME):        $(OBJ) $(MAIN:.c=.o)
			make -C lib/my
			make -C lib/chainedList
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME) $(LFLAG)
			$(RM) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
			make fclean -C lib/my
			make fclean -C lib/chainedList
			$(RM) $(NAME)
	        $(RM) *.gcda
	        $(RM) *.gcno

re:     fclean all

tests_run:
			$(CC) -o unit_tests $(TESTS) \
tests/unit_tests.c --coverage -lcriterion
			./unit_tests
			gcovr
			$(RM) *.gcda
	        $(RM) *.gcno

.PHONY:		all fclean clean re
