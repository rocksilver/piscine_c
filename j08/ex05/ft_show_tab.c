#include "ft_stock_par.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_print_words_tables(char **tab)
{
	int i;

	i = 0;
	while (tab[i] != 0)
	{
		ft_putstr(tab[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	int i;
	int tab[10];
	unsigned int n;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	n = nb;
	if (n <= 9)
		ft_putchar(n % 10 + 48);
	else
	{
		while (n > 0)
		{
			tab[i] = n % 10 + 48;
			n = n / 10;
			i++;
		}
	}
	while (i-- > 0)
		ft_putchar(tab[i]);
	ft_putchar('\n');
}

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	while(par[i].str[0] != '0')
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size_param);
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
