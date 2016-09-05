#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *elem;
	t_list *list;

	list = *begin_list;
	if (list)
	{
		while (list->next != NULL)
			list = list->next;
		elem = ft_create_elem(data);
		list->next = elem;
	}
	else
		*begin_list = ft_create_elem(data);
}
