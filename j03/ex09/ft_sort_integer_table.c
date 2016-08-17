#include "../../j02/ex06/ft_putnbr.c"

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int boo;
	int stock;

	boo = 1;
	while (boo)
	{
		boo = 0;
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				stock = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = stock;
				boo += 1;
			}
			i++;
		}
	}
}

void	ft_display(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		ft_putnbr(tab[i]);
		i++;
	}
}

int		main(void)
{
	int tab[8] = {4, 8, 75, 42, 12, 96, 8, 4};
	
	ft_sort_integer_table(tab, 8);
	ft_display(tab, 8);
	return (0);
}
