NAME=libft.a
CC=gcc
CFLAGS=-Wall -Werror -Wextra

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
