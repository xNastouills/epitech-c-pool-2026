NAME	=	do-op

CC	=	gcc

CFLAGS	=	-I../include -Wall -Wextra

LDFLAGS	=	-L../lib -lmy

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY: all clean fclean re
