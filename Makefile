NAME=libft.a
CC=gcc
CFLAGS=-g -Wall -Werror -Wextra
OBJS=%.o

%.o: %.c
	$(CC) -c $(CFLAGS) $^

$(NAME): *.o
	ar cr $(NAME) $^

all: $(NAME)

.PHONY: clean fclean re all

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all