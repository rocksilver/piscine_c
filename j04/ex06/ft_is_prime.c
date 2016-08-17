#include "../../j02/ex06/ft_putnbr.c"

int		ft_is_prime(int nb)
{
	int i;
	int boo;

	boo = 0;
	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb % nb == 0 && nb % 1 == 0)
	{
		while (i < nb)
		{
			if (nb % i == 0)
				boo++;
			i++;
		}
	}
	if (boo)
		return (0);
	else
		return (1);
}

int		main(void)
{
	ft_putnbr(ft_is_prime(1));
	return (0);
}
