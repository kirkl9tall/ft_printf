NAME = libftprintf.a

SRC= ft_printf.c ft_putadress.c ft_putchar.c ft_putdecimal.c ft_puthexnbr.c ft_putHEXnbr.c ft_putnbr.c ft_putstr.c

CC = cc

OBJS= $(SRC:.c=.o)

RM= rm -f

CFLAGS= -Werror -Wextra -Wall

all:	$(NAME)

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 
fclean: clean
	$(RM) $(NAME)
re: fclean all
.PHONY:	all clean fclean re
