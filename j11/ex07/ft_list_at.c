#include "ft_list.h"
#include "../ex02/ft_create_elem.c"
#include "../ex02/ft_list_push_front.c"
#include "../../j05/ex00/ft_putstr.c"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*list;
	unsigned int	i;

	list = begin_list;
	while (list)
	{
		if (nbr == i)
			return (list);
		list = list->next;
		i++;
	}
	return (list);
}

int		main(int ac, char **av)
{
	int		i;
	t_list	*list;

	list = NULL;
	i = 0;
	while (i < ac)
	{
		ft_list_push_front(&list, av[i]);
		i++;
	}
	list = ft_list_at(list, 3);
	ft_putstr(list->data);
}
