#include "ft_list.h"
#include "../../j05/ex00/ft_putstr.c"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;

	while (*begin_list != NULL)
	{
		tmp = *begin_list;
		*begin_list = begin_list[0]->next;
		free(tmp);
	}
}

int		main(int ac, char **av)
{
	t_list *list;
	int i;

	list = NULL;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	ft_list_clear(&list);
	if (list == NULL)
		ft_putstr("Win !");
	return (0);
}
