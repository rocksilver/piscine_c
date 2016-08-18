#include "../ex01/ft_putnbr.c"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (i);
}

int				main(void)
{
	char dest[] = "hehe";
	char src[] = "hohoho";

	ft_putnbr(ft_strlcpy(dest, src, 8));
	return (0);
}
