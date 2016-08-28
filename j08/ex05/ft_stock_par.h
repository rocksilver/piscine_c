#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

#include <stdlib.h>
#include <unistd.h>

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

#include "ft_split_whitespaces.c"
#include "ft_show_tab.c"

void	ft_show_tab(struct s_stock_par *par);
char	**ft_split_whitespaces(char *str);

#endif
