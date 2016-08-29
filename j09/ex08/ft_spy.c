#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	ft_lowcase(char *str)
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

int		ft_cmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i + 1] == '\0' && s2[i + 1] == '\0')
			return (1);
		i++;
	}
	return (0);
}

void	ft_spy(int ac, char **av)
{
	int i;
	char s1[] = "powers";
	char s2[] = "attack";
	char s3[] = "president";
	
	i = 1;
	while (i < ac)
	{
		ft_lowcase(av[i]);
		if (ft_cmp(av[i], s1))
			ft_putstr("Alert!!!");
		if (ft_cmp(av[i], s2))
			ft_putstr("Alert!!!");
		if (ft_cmp(av[i], s3))
			ft_putstr("Alert!!!");
		i++;
	}
}

int		main(int ac, char **av)
{
	ft_spy(ac, av);
	return (0);
}
