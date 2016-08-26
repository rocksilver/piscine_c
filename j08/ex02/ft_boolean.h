#ifndef FT_BOOLEAN_h
# define FT_BOOLEAN_h

#include <unistd.h>

typedef int			t_bool;

#define EVEN_MSG	"I have an even number of arguments.\n"
#define ODD_MSG		"I have an odd number of arguments.\n"
#define SUCCESS		(0)
#define EVEN(nbr)	((nbr % 2 == 0) ? TRUE : FALSE)
#define TRUE		(1)
#define FALSE		(0)

void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

#endif
