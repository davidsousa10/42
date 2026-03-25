NAME = push_swap

CC = cc
CFLAGS = -Wall -Werror -Wextra

SRC = main.c stack.c stack_free.c \
	  operations_swap.c operations_push.c \
	  operations_rotate.c operations_reverse_rotate.c \
	  parse.c parse_utils.c error.c utils.c \
	  indexer.c disorder.c \
	  sort_tiny.c sort_simple.c sort_medium.c sort_complex.c sort_adaptative.c \
	  bench.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME) -lm

%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
