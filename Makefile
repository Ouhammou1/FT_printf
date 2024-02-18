CC = cc
CFLAGS=-Wall -Wextra -Werror

CFILES= ft_putnbr.c ft_putstr.c ft_putchar.c ft_printf.c ft_putnbr_long.c  ft_puthexa.c ft_puthexadecimal.c ft_putadr.c
NAME =libftprintf.a

Object = $(CFILES:.c=.o)

all: $(NAME)

$(NAME): $(Object)
	ar rcs $(NAME) $(Object)

clean:
	rm -f $(Object)

fclean: clean
	rm -f $(NAME)

re : fclean $(NAME)
