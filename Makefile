
NAME=libftprintf.a

SRC= ft_printf.c\
		numbers_functions.c\
		strings_functions.c\

OBJECTS=$(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -rc $(NAME) $(OBJECTS)

%.o: %.c  ft_printf.h Makefile
	cc -Wall -Wextra -Werror -c $<

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean
	$(MAKE) all
