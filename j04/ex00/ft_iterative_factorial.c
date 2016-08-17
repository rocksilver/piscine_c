#include "../../j02/ex06/ft_putnbr.c"

int		ft_iterative_factorial(int nb)
{
	int i;
	int ret;

	ret = 1;
	i = 1;
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		ret = ret * i;
		ft_putnbr(ret);
		i++;
	}
	return (ret);
}

int		main(void)
{
	ft_putnbr(ft_iterative_factorial(10));
	return (0);
}
