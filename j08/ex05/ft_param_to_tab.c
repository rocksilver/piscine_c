#include "ft_stock_par.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *str)
{
	char *new_str;
	int i;

	new_str = (char *)malloc(sizeof(*new_str) * (ft_strlen(str) + 1));
	i = 0;
	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *par;
	int i;

	par = (t_stock_par *)malloc(sizeof(*par) * ac);
	i = 0;
	while (i < ac)
	{
		par[i].size_param = ft_strlen(av[i]);
		par[i].str = av[i];
		par[i].copy = ft_strcpy(av[i]);
		par[i].tab = ft_split_whitespaces(par[i].str);
		i++;
	}
	par[i].str = "0";
	return (par);
}

int					main(int argc, char **argv)
{
	ft_show_tab(ft_param_to_tab(argc, argv));
	return (0);
}
