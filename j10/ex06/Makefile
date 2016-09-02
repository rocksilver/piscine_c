NAME = do-op
CFLAGS = -Wall -Wextra -Werror
SRCS =	srcs/doop.c \
		srcs/ft_calculation.c \
		srcs/ft_display.c \
		srcs/main.c
INCLUDES = includes/doop.h

all:
	@gcc -o $(NAME) $(SRCS) $(INCLUDES)
	@echo "Compiling...\nReady !"

clean:
	@rm $(NAME)
	@echo "Erase executable...\nReady !"

re: clean all
