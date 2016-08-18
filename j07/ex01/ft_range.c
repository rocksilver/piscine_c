#include "../../j02/ex06/ft_putnbr.c"
#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	if (min >= max)
		return (tab = NULL);
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	i = min;
	while (i < max)
	{
		tab[i] = i;
		i++;
	}
	return (tab);
}

int		main(void)
{
	int *tab;
	int i;
	int max;
	int min;

	min = 1;
	max = 48;
	tab = ft_range(min, max);
	i = min;
	while (i < max)
	{
		ft_putnbr(tab[i]);
		i++;
	}
	return (0);
}
