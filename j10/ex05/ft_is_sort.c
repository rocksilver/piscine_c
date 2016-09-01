#include "../../j02/ex06/ft_putnbr.c"

int		ft_cmp(int nb1, int nb2)
{
	if (nb1 > nb2)
		return (-1);
	else if (nb1 == nb2)
		return (0);
	else
		return (1);
}

int		ft_is_sort(int *tab, int length, int(*f) (int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) == -1)
			return (0);
		i++;
	}
	return (1);
}

int		main(void)
{
	int tab[3];

	tab[0] = 1;
	tab[1] = 5;
	tab[2] = 6;
	ft_putnbr(ft_is_sort(tab, 2, &ft_cmp));
	return (0);
}
