#include "../../j02/ex06/ft_putnbr.c"

int		ft_test(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'p')
			return (1);
		i++;
	}
	return (0);
}

int		ft_any(char **tab, int(*f) (char *))
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	av[ac - 1] = 0;
	ft_putnbr(ft_any(av, &ft_test));
	return (0);
}
