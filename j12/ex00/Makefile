NAME = ft_display_file
SRCS = ft_display_file.c
OBJ = ft_display_file.o
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
