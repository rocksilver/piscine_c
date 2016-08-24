#include <stdlib.h>
#include "../../j07/ex05/ft_print_words_tables.c"

int		find_end(char *str, int begin)
{
	int i;
	int end;

	i = begin;
	end = 0;
	while (str[i] != '\0')
	{
		if (str[i + 1] == ' ' || str[i + 1] == '\n' || str[i + 1] == '\t')
			return (end = i);
		if (str[i + 1] == '\0')
			return (end = i);
		i++;
	}
	return (0);
}

int		find_begin(char *str, int index)
{
	int i;
	int begin;
	int count;

	count = 0;
	begin = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 90 && str[i] <= 122))
		{
			if (i == 0 && index == count)
				return (begin);
			if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
			{
				if (count == index)
					return (begin = i);
				count++;
			}
		}
		i++;
	}
	return (0);
}

int		ft_count_word(char *str)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 90 && str[i] <= 122))
		{
			if (i == 0)
				count++;
			if (str[i - 1] == ' ' || str[i - 1] == '\n' || str[i - 1] == '\t')
				count++;
		}
		i++;
	}
	return (count);
}

void	assignment(char *tab, char *str, int begin, int end)
{
	int i;
	int j;

	i = begin;
	j = 0;
	while (i <= end)
	{
		tab[j] = str[i];
		i++;
		j++;
	}
	tab[j] = '\0';
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;
	int		i;
	int		begin;
	int		end;

	tab = (char **)malloc(sizeof(char *) * (ft_count_word(str) + 1));
	i = 0;
	while (i < ft_count_word(str))
	{
		begin = find_begin(str, i);
		end = find_end(str, begin);
		tab[i] = (char *)malloc(sizeof(char) * ((end - begin) + 1));
		assignment(tab[i], str, begin, end);
		i++;
	}
	tab[i] = 0;
	return (tab);
}

int		main(void)
{
	char	str[] = "\nhehe  \thoho      \nhaha\n";
	char	**tab;

	tab = ft_split_whitespaces(str);
	ft_print_words_tables(tab);
	return (0);
}
