#include "../../j05/ex00/ft_putstr.c"
#include <stdlib.h>

int		ft_len_params(int argc, char **argv)
{
	int i;
	int j;
	int full_len;

	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			full_len++;
			j++;
		}
		full_len++;
		i++;
	}
	return (full_len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = (char *)malloc(sizeof(*str) * ft_len_params(argc, argv));
	i = 0;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[k] = argv[i][j];
			k++;
			j++;
		}
		if (i + 1 != argc)
			str[k] = '\n';
		else
			str[k] = '\0';
		k++;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	ft_putstr(ft_concat_params(argc, argv));
	return (0);
}
