#include "../../j02/ex06/ft_putnbr.c"

void	ft_foreach(int *tab, int length, void(*f) (int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int		main(void)
{
	int tab[5];

	tab[0] = 2;
	tab[1] = 2;
	tab[2] = 2;
	tab[3] = 2;
	tab[4] = 2;
	ft_foreach(tab, 5, &ft_putnbr);
	return (0);
}
