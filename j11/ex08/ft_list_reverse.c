#include "ft_list.h"
#include "../../j05/ex00/ft_putstr.c"

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		i;

	i = 0;
	list = begin_list;
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}

void	ft_list_push_front_new(t_list *begin_list, t_list *insert)
{
  t_list *list;

  list = begin_list;
  if (list)
    {
      while (list->next != NULL)
	list = list->next;
      insert->next = NULL;
      list->next = insert;
    }
  else
    {
      insert->next = NULL;
      begin_list = insert;
    }
}

int	ft_list_reverse(t_list **begin_list)
{
  t_list *tmp;
  t_list *tmp2;
  t_list *tmp3;

  tmp = *begin_list;
  if (tmp->next == NULL)
    return (0);
  tmp2 = tmp->next;
  tmp->next = NULL;
  if (tmp2->next == NULL)
    {
      tmp2->next = tmp;
      *begin_list = tmp2;
      return (0);
    }
  tmp3 = tmp2->next;
  while (tmp3)
    {
      tmp3 = tmp2->next;
      tmp2->next = tmp;
      tmp = tmp2;
      tmp2 = tmp3;
    }
  *begin_list = tmp;
}

t_list	*ft_create_elem(void *data)
{
  t_list *elem;

  elem = (t_list *)malloc(sizeof(t_list));
  elem->next = NULL;
  elem->data = data;
  return (elem);
}

void	ft_list_push_front(t_list **begin_list, void *data)
{
  t_list *list;
  t_list *elem;

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

int		main(int ac, char **av)
{
  t_list	*list;
  int		i;

  list = NULL;
  i = 0;
  while (i++ < ac - 1)
    ft_list_push_front(&list, av[i]);
  ft_list_reverse(&list);
  while (list != NULL)
    {
      ft_putstr(list->data);
      list = list->next;
    }
  return (0);
}
