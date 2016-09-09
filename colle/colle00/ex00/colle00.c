void	ft_putchar(char c);

void	put_y(int x, int y)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (i++ < y - 1)
	{
		ft_putchar('\n');
		ft_putchar('|');
		if (x > 1)
		{
			j = 0;
			while (j++ < x - 2)
				ft_putchar(' ');
			ft_putchar('|');
		}
		i++;
	}
	if (y > 1)
	{
		ft_putchar('\n');
		ft_putchar('o');
	}
}

void	colle(int x, int y)
{
	int i;

	i = 0;
	ft_putchar('o');
	while (i++ < x - 2)
		ft_putchar('-');
	if (x > 1)
		ft_putchar('o');
	put_y(x, y);
	if (y > 1 && x > 1)
	{
		i = 0;
		while (i++ < x - 2)
			ft_putchar('-');
		ft_putchar('o');
	}
	ft_putchar('\n');
}
