#include "../../j02/ex06/ft_putnbr.c"

int		ft_bouton(int i, int j, int k)
{
	if ((i < j && i > k) || (i > j && i < k))
		return (i);
	if ((k < j && k > i) || (k > j && k < i))
		return (k);
	if ((j < i && j > k) || (j > i && j < k))
		return (j);
	return (0);
}

int		main(void)
{
	ft_putnbr(ft_bouton(5, 2, 8));
	return (0);
}
