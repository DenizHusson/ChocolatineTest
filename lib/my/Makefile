##
## EPITECH PROJECT, 2022
## lib
## File description:
## Makefile
##

SRC		=		my_compute_power_rec.c 	\
				my_compute_square_root.c 	\
				my_find_prime_sup.c 	\
				my_getnbr.c 	\
				my_is_prime.c 	\
				my_isneg.c 	\
				my_numlen.c 	\
				my_put_nbr.c 	\
				my_putchar.c 	\
				my_revstr.c 	\
				my_showmem.c 	\
				my_showstr.c 	\
				my_sort_int_array.c 	\
				my_str_isalpha.c 	\
				my_str_islower.c 	\
				my_str_isnum.c 	\
				my_str_isprintable.c 	\
				my_str_isupper.c 	\
				my_str_to_array.c 	\
				my_strcapitalize.c 	\
				my_strcmp.c 	\
				my_strcpy.c 	\
				my_strlen.c 	\
				my_strlowcase.c 	\
				my_strncmp.c 	\
				my_strncpy.c 	\
				my_strupcase.c 	\
				my_swap.c 	\
				my_putstr.c

OBJ 	=		$(SRC:.c=.o)

NAME	=		my

LIB 	= 		lib$(NAME).a

INCLUDE	= 		lib$(NAME).h

all:		$(NAME)

$(NAME):	$(OBJ)
			$(AR) rc $(LIB) $(OBJ)
			cp $(INCLUDE) ../../includes
			$(RM) $(OBJ)

fclean:		clean

clean:
			$(RM) $(OBJ)
			$(RM) $(LIB)

re:			fclean
			$(MAKE) all

.PHONY:		all fclean clean re
