NAME = libft.a
CFLAGS = -Wall -Werror -Wextra
SRC_C = srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strcmp.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c
SRC_O = ft_putchar.o \
		ft_putstr.o \
		ft_strcmp.o \
		ft_strlen.o \
		ft_swap.o


all:
	@gcc $(CFLAGS) -c $(SRC_C)
	@echo "Compilation of sources in objects..."
	@ar -rc $(NAME) $(SRC_O)
	@echo "Creation of $(NAME)..."
	@ranlib $(NAME)
	@echo "Optimization of $(NAME)..."
	@echo "$(NAME) is ready !"

clean:
	@rm $(SRC_O)
	@echo "Erase object file..."
	@echo "Ready !"

fclean: clean
	@rm $(NAME)
	@echo "Erase executable..."
	@echo "Ready !"

re: fclean all
