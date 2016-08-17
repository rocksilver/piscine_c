#include "../../j02/ex06/ft_putnbr.c"

int		ft_recursive_power(int nb, int power)
{
	if (power == 1)
		return (nb);
	return(nb * ft_recursive_power(nb, power - 1));
}

int		main(void)
{
	ft_putnbr(ft_recursive_power(2, 10));
	return (0);
}
