CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = ft_hexdump
SRCS = ft_hexdump.c errors.c ft_print.c ft_stdin.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re