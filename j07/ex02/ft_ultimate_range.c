#include "../../j02/ex06/ft_putnbr.c"
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	range = (int **)malloc(sizeof(int *) * 1);
	range[0] = (int *)malloc(sizeof(int) * (max - min));
	if (range[0] == NULL)
		return (0);
	i = min;
	while (i < max)
	{
		range[0][i] = i;
		i++;
	}
	return (i - min);
}

int		main(void)
{
	int **range;

	range = NULL;
	ft_putnbr(ft_ultimate_range(range, 5, 5));
	return (0);
}
