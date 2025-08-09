NAME = libftprintf.a
CC = cc
FLAG = -Wall -Wextra -Werror

SRC = ft_format.c  ft_manage_err.c  ft_printf.c  ft_treat_format.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	cc $(FLAG) -c $(SRC)
	ar rc $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
compile:
	cc $(FLAG) main.c libftprintf.a -o program
run: compile
	./program
re: fclean all

.PHONY: all clean fclean re compile run