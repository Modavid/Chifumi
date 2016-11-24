##
## Makefile for  in /home/mod/devc/libmy_01
## 
## Made by MO david
## Login   <mo_d@etna-alternance.net>
## 
## Started on  Sat Oct 22 21:18:05 2016 MO david
## Last update Sat Oct 29 11:41:46 2016 MO david
##

CC		= gcc

NAME		= chifumi.a

CFLAGS		= -Wextra -Wall -Werror

MLIB		= ar r

RLIB		= ranlib

RM		= rm -f

SRC		= my_putchar.c\
		  my_put_nbr.c\
		  my_putstr.c\
		  my_getnbr.c\
		  my_strcmp.c\
		  add_struct.c\
		  chifumi_aff.c\
		  chifumi_error.c\
		  chifumi_game.c\
		  chifumi_option.c\
		  chifumi_parsing.c\
		  chifumi_start.c\
		  main.c\
		  mk_struct.c\
		  rand.c\
		  readline.c
OBJ		= $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(CFLAGS) $(SRC)
		$(MLIB) $(NAME) $(OBJ)
		$(RLIB) $(NAME)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:         all clean fclean re
