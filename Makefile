
.PHONY: all clean fclean re

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRCS = ft_parse_it.c ft_clean_it.c ft_check_it.c

OBJS = $(NAME:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

./%.o: ./%.c
	gcc $(FLAGS) $(NAME) -o $@ -c $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
