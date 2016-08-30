#include <stdlib.h>
#include "../../j02/ex06/ft_putnbr.c"

int		ft_compact(char **tab, int length)
{
	int i;
	int stop;
	int boo;

	boo = 1;
	stop = 0;
	while (boo)
	{
		i = 0;
		while (i < length)
		{
			boo = 0;
			if (tab[i] == NULL)
			{
				while (i < length - stop++)
				{
					tab[i] = tab[i + 1];
					i++;
				}
				boo = 1;
			}
			i++;
		}
	}
	return (length - stop);
}

int		main(int ac, char **av)
{
	ft_putnbr(ft_compact(av, ac));
	return (0);
}
