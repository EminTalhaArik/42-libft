NAME = libft.a
FLAGS = -Wall -Wextra -Werror

SRCS        = $(shell find . -maxdepth 1 -name "ft_*.c")
OBJS        = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $?

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
