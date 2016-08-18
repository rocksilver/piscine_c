#include "../ex00/ft_putstr.c"
#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	char *ptr;

	ptr = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
		ptr = &str[i];
			while (str[i] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (ptr);
				i++;
				j++;
			}
			i--;
		}
		i++;
	}
	ptr = NULL;
	return (ptr);
}

int		main(void)
{
	char str[] = "eeeehele  helloee";
	char to_find[] = "hello";

	ft_putstr(ft_strstr(str, to_find));
	return (0);
}
