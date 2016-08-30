#include "ft_door.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

int		close_door(t_door *door)
{
	ft_putstr("Door closing...");
	door->state = CLOSE;
	return (TRUE);
}

int		open_door(t_door *door)
{
	ft_putstr("Door opening...");
	door->state = OPEN;
	return (TRUE);
}

int		is_door_open(t_door *door)
{
	ft_putstr("Door is open ?");
	return (door->state = OPEN);
}

int		is_door_close(t_door *door)
{
	ft_putstr("Door is close ?");
	return (door->state = CLOSE);
}
