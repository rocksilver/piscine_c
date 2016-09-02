#include "ft_split_whitespaces.c"
#include "../../j07/ex05/ft_print_words_tables.c"

void	ft_sort_wordtab(char **tab)
{
	int i;
	int boo;
	char *tmp;

	boo = 1;
	while (boo)
	{
		i = 0;
		boo = 0;
		while (tab[i + 1] != 0)
		{
			if (tab[i][0] > tab[i + 1][0])
			{
				tmp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = tmp;
				boo = 1;
			}
			i++;
		}
	}
}

int		main(int ac, char **av)
{
	char **tab;

	(void)ac;
	tab = ft_split_whitespaces(av[1]);
	ft_sort_wordtab(tab);
	ft_print_words_tables(tab);
	return (0);
}
