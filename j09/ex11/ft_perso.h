#ifndef FT_PERSO_H
# define FT_PERSO_H

#include <string.h>
#define SAVE_AUSTIN_POWERS	"Il faut sauver le soldat Austin !"

typedef struct		s_perso
{
	char	*name;
	double	life;
	int		age;
	char *profession;
}					t_perso;

#endif
