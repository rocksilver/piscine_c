#include "../ex01/ft_putnbr.c"

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int				ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int len_s2;

	(void)s1;
	len_s2 = ft_strlen(s2);
	if (n < len_s2)
		return (-1);
	else if (n == len_s2)
		return (0);
	else
		return (1);
}

int				main(void)
{
	char s1[] = "hellohello";
	char s2[] = "hel";

	ft_putnbr(ft_strncmp(s1, s2, 4));
	return (0);
}
