#include "../ex00/ft_putstr.c"

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		main(void)
{
	char dest[] = "ooooo";
	char src[] = "heleo";

	ft_putstr(ft_strcpy(dest, src));
	return (0);
}
