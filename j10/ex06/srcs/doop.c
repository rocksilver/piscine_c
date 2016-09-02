#include "../includes/doop.h"

int		ft_atoi(char *str)
{
	int i;
	int nb;
	int boo;

	boo = 0;
	nb = 0;
	i = 0;
	if (str[0] == '-')
	{
		boo = 1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			(boo) ? nb = -nb : 0;
			return (nb);
		}
		if (str[i] >= 48 && str[i] <= 57)
			nb = nb * 10 + (str[i] - 48);
		i++;
	}
	(boo) ? nb = -nb : 0;
	return (nb);
}

int		ft_verif(char **av, int(*f) (int, int))
{
	if (av[2][0] != '+' && av[2][0] != '-' && av[2][0] != '/' && \
	av[2][0] != '%' && av[2][0] != '*')
	{
		ft_putchar('0');
		return (0);
	}
	if (f == &ft_modulo)
	{
		if (av[3][0] == '0')
		{
			ft_putstr("Stop : modulo by zero");
			return (0);
		}
	}
	if (f == &ft_division)
	{
		if (av[3][0] == '0')
		{
			ft_putstr("Stop : division by zero");
			return (0);
		}
	}
	return (1);
}

int		ft_calculator(char **av, int(*f) (int, int))
{
	return (f(ft_atoi(av[1]), ft_atoi(av[3])));
}

void	ft_doop(char **av)
{
	char	op[5];
	void	*ptr_f[5];
	int		i;

	op[0] = '+';
	op[1] = '-';
	op[2] = '/';
	op[3] = '%';
	op[4] = '*';
	ptr_f[0] = &ft_addition;
	ptr_f[1] = &ft_subtraction;
	ptr_f[2] = &ft_division;
	ptr_f[3] = &ft_modulo;
	ptr_f[4] = &ft_multiply;
	i = 0;
	while (i < 5)
	{
		if (op[i] == av[2][0] && ft_verif(av, ptr_f[i]) == 1)
		{
			ft_putnbr(ft_calculator(av, ptr_f[i]));
		}
		i++;
	}
}
