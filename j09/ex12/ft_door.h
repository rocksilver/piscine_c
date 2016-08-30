#ifndef FT_DOOR_H
# define FT_DOOR_H

#include <unistd.h>
#define OPEN	1
#define CLOSE	0
#define TRUE	1

typedef struct		s_door
{
	int state;
}					t_door;

#include "ft_door.c"
int		close_door(t_door *door);
int		open_door(t_door *door);
int		is_door_open(t_door *door);
int		is_door_close(t_door *door);

#endif
