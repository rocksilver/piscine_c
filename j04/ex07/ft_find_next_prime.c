#include "../../j02/ex06/ft_putnbr.c"

int		ft_find_next_prime(int nb)
{
	int i;
	int boo;

	while (boo != 0)
	{
		boo = 0;
		i = 2;
		if (nb == 0 || nb == 1)
			boo++;
		if (nb % nb == 0 && nb % 1 == 0)
		{
			while (i < nb)
			{
				if (nb % i == 0)
					boo++;
				i++;
			}
		nb++;
		}
	}
	return (nb - 1);
}

int		main(void)
{
	ft_putnbr(ft_find_next_prime(165485));
	return (0);
}
