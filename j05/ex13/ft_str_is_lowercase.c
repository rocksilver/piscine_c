#include "../ex01/ft_putnbr.c"

int		ft_str_is_lowercase(char *str)
{
	int i;
	int cmp;

	cmp = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			cmp++;
		i++;
	}
	if (i == cmp || i == 0)
		return (1);
	else
		return (0);
}

int		main(void)
{
	char str[] = "yyyy";

	ft_putnbr(ft_str_is_lowercase(str));
	return (0);
}
