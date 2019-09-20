CC = gcc
FLAGS = -Wall -Wextra -Werror -g
NAME = libft
SRC = main.c src/*.c 
INCLUDES = includes/libft.h

all:$(NAME)

$(NAME):
	$(CC) $(SRC) $(FLAGS) -I $(INCLUDES) -o $(NAME)

clean:
	/bin/rm -f $(NAME)
