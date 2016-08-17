#include "../ex05/ft_putstr.c"

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char rev[100];

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		rev[i] = 0;
		i++;
	}
	rev[i] = 0;
	while (i-- >= 0)
	{
		rev[j] = str[i];
		j++;
	}
	rev[j] = '\0';
	while (rev[i] != '\0')
	{
		str[i] = rev[i];
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "tby";

	ft_putstr(ft_strrev(str));
	return (0);
}
