#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
