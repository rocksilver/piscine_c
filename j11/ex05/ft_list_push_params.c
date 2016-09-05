#include "ft_list.h"
#include "../../j05/ex00/ft_putstr.c"

void		ft_list_push_front(t_list **begin, void *data)
{
	t_list *list;
	t_list *elem;

	list = *begin;
	if(list)
	{
		while (list->next != NULL)
			list = list->next;
		elem = ft_create_elem(data);
		list->next = elem;
	}
	else
		*begin = ft_create_elem(data);
}

t_list		*ft_list_push_params(int ac, char **av)
{
	int i;
	t_list *list;

	list = NULL;
	i = 1;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	return (list);
}

int			main(int ac, char **av)
{
	t_list *list;

	list = ft_list_push_params(ac, av);
	while (list != NULL)
	{
		ft_putstr(list->data);
		list = list->next;
	}
	return (0);
}
