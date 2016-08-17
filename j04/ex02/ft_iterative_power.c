#include "../../j02/ex06/ft_putnbr.c"

int		ft_iterative_power(int nb, int power)
{
	int i;
	int val;

	val = nb;
	i = 1;
	while (i < power)
	{
		nb = nb * val;
		i++;
	}
	return (nb);
}

int		main(void)
{
	ft_putnbr(ft_iterative_power(2, 10));
	return (0);
}
