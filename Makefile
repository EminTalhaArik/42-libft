NAME = libft.a
FLAGS = -Wall -Wextra -Werror

SRCS        = $(shell find . -maxdepth 1 -name "ft_*.c" ! -name "ft_lst*.c")
BONUS_SRCS  = $(shell find . -maxdepth 1 -name "ft_lst*.c")

OBJS        = $(SRCS:.c=.o)
BONUS_OBJS  = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
