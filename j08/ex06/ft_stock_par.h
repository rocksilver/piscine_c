#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

#include <unistd.h>

typedef struct		s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}					t_stock_par;

#endif
