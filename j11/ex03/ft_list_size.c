 #include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int i;
	t_list *list;

	list = begin_list;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
