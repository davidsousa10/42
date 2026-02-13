NAME	= libftprintf.a

CC		= cc
CFLAGS	= -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -f

INCLUDE	= ft_printf.h

SRC		= ft_printf.c \
		  ft_put_char.c \
		  ft_put_nbr_base.c \
		  ft_put_nbr_int.c \
		  ft_put_nbr_unsigned.c \
		  ft_put_ptr.c \
		  ft_put_str.c

OBJ		= $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re