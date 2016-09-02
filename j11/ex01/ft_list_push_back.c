#include "ft_list.h"
#include "../../j05/ex00/ft_putstr.c"

t_list		*ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (elem)
	{
		elem->next = NULL;
		elem->data = data;
	}
	begin_list[0]->next = elem;
	return (elem);
}

int		main(void)
{
	t_list *list;
	t_list *elem;
	char str[] = "tutu";
	char str1[] = "tata";
	char str2[] = "toto";

	list = ft_create_elem(str);
	elem = ft_list_push_back(&list, str1);
	ft_list_push_back(&elem, str2);
	while (list != NULL)
	{
		ft_putstr(list->data);
		list = list->next;
	}
	return (0);
}
