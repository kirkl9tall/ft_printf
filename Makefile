NAME = libftprintf.a

SRC= lili.c

CC = cc

OJBS= $(SRC:.c=.o)

RM= rm -f

FLAGS= -Werror -Wextra -Wall

all:$(NAME)
$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 
fclean: clean
	$(RM) $(NAME)
re:

