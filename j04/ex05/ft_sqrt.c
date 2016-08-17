#include "../../j02/ex06/ft_putnbr.c"

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i < nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

int		main(void)
{
	ft_putnbr(ft_sqrt(15));
	return (0);
}
