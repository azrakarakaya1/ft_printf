NAME = libftprintf.a
CC = cc
FLAG = -Wall -Wextra -Werror

SRC = 

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