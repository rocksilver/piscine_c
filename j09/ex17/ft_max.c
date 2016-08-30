#include "../../j02/ex06/ft_putnbr.c"

int		ft_max(int *tab, int length)
{
	int i;
	int max;

	i = 0;
	max = tab[0];
	while (i < length)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

int		main(void)
{
	int tab[] = {4, 8, 5, 3};

	ft_putnbr(ft_max(tab, 4));
	return (0);
}
