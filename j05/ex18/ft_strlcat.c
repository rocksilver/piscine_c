#include "../ex01/ft_putnbr.c"

unsigned int		ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (i < size - 1)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int		main(void)
{
	char dest[] = "hoho";
	char src[] = "hehe";

	ft_putnbr(ft_strlcat(dest, src, 9));
	return (0);
}
