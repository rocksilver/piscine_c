#include "../../j02/ex06/ft_putnbr.c"

int		ft_recursive_factorial(int nb)
{
	if (nb == 1)
		return (1);
	nb = nb * ft_recursive_factorial(nb - 1);
	return (nb);
}

int		main(void)
{
	ft_putnbr(ft_recursive_factorial(4));
	return (0);
}
