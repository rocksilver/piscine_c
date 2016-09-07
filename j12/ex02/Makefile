NAME = ft_tail
SRCS = ft_tail.c
OBJ = ft_tail.o
FLAGS = -Wall -Werror -Wextra

all:
	@gcc -c $(SRCS)
	@gcc -o $(NAME) $(OBJ)
	@echo "Compiling...\nReady !"

clean:
	@rm $(OBJ)
	@echo "Erase $(OBJ)...\nReady !"

fclean:
	@rm $(NAME)
	@echo "Erase $(NAME)...\nReady !"

re: fclean all
