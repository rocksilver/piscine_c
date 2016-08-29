#include "../../j05/ex00/ft_putstr.c"

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] < 'k') || (str[i] >= 'A' && str[i] < 'K'))
			str[i] += 16;
		if ((str[i] > 'j' && str[i] <= 'z') || (str[i] > 'J' && str[i] <= 'Z'))
			str[i] -= 10;
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "ZzZz";

	ft_putstr(ft_rot42(str));
	return (0);
}
