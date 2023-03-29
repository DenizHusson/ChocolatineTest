##
## EPITECH PROJECT, 2022
## chainedlist
## File description:
## Makefile
##

SRC		=		addnremove.c 	\
				basiclist.c

OBJ 	=		$(SRC:.c=.o)

NAME	=		chainedlist

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
