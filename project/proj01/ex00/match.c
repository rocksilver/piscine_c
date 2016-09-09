#include "../../../j02/ex06/ft_putnbr.c"

int		wildcard_end(char *s1, char *s2)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		j = 1;
		if (s1[i] == s2[j])
		{
			while (s1[i] == s2[j])
			{
				if (s1[i + 1] == '\0' && s2[j + 1] == '\0')
					return (1);
				i++;
				j++;
			}
		}
		i++;
	}
	return (0);
}

int		wildcard_begin(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s2[i + 1] == '*')
			return (1);
		i++;
	}
	return (0);
}

int		wildcard_between(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s2[i + 1] == '*')
		{
			j = i + 2;
			while (s1[i] != s2[j])
				i++;
			while (s1[i] == s2[j])
			{
				if (s1[i + 1] == '\0' && s2[j + 1] == '\0')
					return (1);
				i++;
				j++;
			}
		}
		i++;
	}
	return (0);
}

int		match(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s2[i + 1] != '\0')
		i++;
	if (s2[0] == '*' && s2[1] == '\0')
		return (1);
	else if (s2[i] == '*')
		return (wildcard_begin(s1, s2));
	else if (s2[0] == '*')
		return (wildcard_end(s1, s2));
	else
		return (wildcard_between(s1, s2));
	return (15);
}

int		main(int ac, char **av)
{
	(void)ac;
	ft_putnbr(match(av[1], av[2]));
	return (0);
}
