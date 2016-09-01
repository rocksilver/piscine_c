#include <stdlib.h>

int		ft_test(int nb)
{
	return (nb * 2);
}

int		*ft_map(int *tab, int length, int(*f) (int))
{
	int *ret;
	int i;

	ret = (int *)malloc(sizeof(ret) * length);
	i = 0;
	while (i < length)
	{
		ret[i] = f(tab[i]);
		i++;
	}
	return (ret);
}

int		main(void)
{
	int tab[2];

	tab[0] = 1;
	tab[0] = 1;
	tab[0] = 1;
	ft_map(tab, 2, &ft_test);
	return (0);
}
