#ifndef FT_DOOP_H
# define FT_DOOP_H

#include <unistd.h>

//"../srcs/ft_calculation.c"
int		ft_addition(int nb1, int nb2);
int		ft_subtraction(int nb1, int nb2);
int		ft_division(int nb1, int nb2);
int		ft_modulo(int nb1, int nb2);
int		ft_multiply(int nb1, int nb2);

//"../srcs/ft_display.c"
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);

//"../srcs/doop.c"
int		ft_atoi(char *str);
int		ft_calculator(char **av, int(*f) (int, int));
void	ft_doop(char **av);

#endif
