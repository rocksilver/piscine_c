#include "../ex00/ft_putstr.c"

void	ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i - 1] >= 20 && str[i - 1] <= 47)
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[] = "bonjoUr, commEnt tu vas ? 42mots quarante-deux; cin+un+deux";

	ft_putstr(ft_strcapitalize(str));
	return (0);
}
