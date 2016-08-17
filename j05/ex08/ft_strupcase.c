#include "../ex00/ft_putstr.c"

char	*ft_strupcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "hehe hoho haha";

	ft_putstr(ft_strupcase(str));
	return (0);
}
