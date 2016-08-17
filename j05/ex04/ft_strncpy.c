#include "../ex00/ft_putstr.c"

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int length_src;

	length_src = ft_strlen(src);
	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	if (n < length_src)
	{
		while (i < length_src)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return (dest);
}

int				main(void)
{
	char src[] = "hoho";
	char dest[] = "eeee";

	ft_putstr(ft_strncpy(dest, src, 8));
	return (0);
}
