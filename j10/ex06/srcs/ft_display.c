#include "../includes/doop.h"

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

void	ft_putnbr(int nb)
{
	int				tab[15];
	int				i;
	unsigned int	n;

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
		n /= 10;
		i++;
		}
		while (i-- > 0)
			ft_putchar(tab[i]);
	}
	ft_putchar('\n');
}
