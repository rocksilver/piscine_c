#include "../ex00/ft_putstr.c"

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

int		main(void)
{
	char dest[] = "bon dieu";
	char src[] = " it's working";

	ft_putstr(ft_strncat(dest, src, 4));
	return (0);
}
