##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

SRC	=	main.c	\
		my_getnbr.c	\
		s_p.c	\
		tools_main.c	\
		r.c	\
		rr.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
