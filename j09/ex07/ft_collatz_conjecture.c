#include "../../j02/ex06/ft_putnbr.c"

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 2)
		return (1);
	if (base % 2 == 0)
		base /= 2;
	else
		base = (base * 3) + 1;
	return (ft_collatz_conjecture(base) + 1);
}

int				main(void)
{
	ft_putnbr(ft_collatz_conjecture(127));
	return (0);
}
