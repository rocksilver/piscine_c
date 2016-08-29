void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int stock;

	stock = ***a;
	***a = *b;
	*b = ****d;
	****d = *******c;
	*******c = stock;
}
