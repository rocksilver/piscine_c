#include <stdlib.h>
#include "../../j05/ex00/ft_putstr.c"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_assignment(char **tab, char *sep, char *ret)
{
	int i;
	int j;
	int k;

	i = 0;
	k = 0;
	while (tab[i] != 0)
	{
		j = 0;
		while (tab[i][j] != '\0')
		{
			ret[k] = tab[i][j];
			j++;
			k++;
		}
		if (tab[i + 1] != 0)
		{
			j = 0;
			while (sep[j] != '\0')
			{
				ret[k] = sep[j];
				j++;
				k++;
			}
		}
		i++;
	}
	ret[k] = '\0';
}

char	*ft_join(char **tab, char *sep)
{
	int i;
	int full_len;
	char *ret;

	full_len = 0;
	i = 0;
	while (tab[i] != 0)
	{
		full_len += ft_strlen(tab[i]);
		i++;
	}
	full_len += ft_strlen(sep) * (i - 1);
	ret = (char *)malloc(sizeof(char) * (full_len + 1));
	i = 0;
	ft_assignment(tab, sep, ret);
	return (ret);
}

int		main(int ac, char **av)
{
	(void)ac;
	ft_putstr(ft_join(av, "=="));
	return (0);
}
