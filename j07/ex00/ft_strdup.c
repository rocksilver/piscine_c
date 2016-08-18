#include "../../j05/ex00/ft_putstr.c"
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *dup;
	int i;
	int len;

	i = 0;
	len = ft_strlen(src);
	dup = (char *)malloc(sizeof(*dup) * (len + 1));
	while (i < len)
	{
		dup[i] = src[i];
		i++;
	}
	return (dup);
}

int		main(void)
{
	char src[] = "diff";

	ft_putstr(ft_strdup(src));
	return (0);
}
