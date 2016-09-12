#include "ft_btree.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(void *nb_ptr)
{
	int i;
	int tab[10];
	unsigned int n;
	int *trans;
	int nb;

	trans = nb_ptr;
	nb = *trans;
	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	n = nb;
	if (n <= 9)
		ft_putchar(n % 10 + 48);
	else
	{
		while (n > 0)
		{
			tab[i] = n % 10 + 48;
			n = n / 10;
			i++;
		}
	}
	while (i-- > 0)
		ft_putchar(tab[i]);
	ft_putchar('\n');
}

int		ft_cmp(void *nbr1, void *nbr2)
{
	int *nb1;
	int *nb2;

	nb1 = nbr1;
	nb2 = nbr2;
	if (*nb1 < *nb2)
		return (-1);
	else if (*nb1 == *nb2)
		return (0);
	else
		return (1);
}

void	btree_insert_data(t_btree **root, void *item, int(*cmpf) (void*, void*))
{
	t_btree *path;

	path = *root;
	if (path)
	{
		if (cmpf(item, path->item) >= 0)
		{
			if (path->right)
				btree_insert_data(&path->right, item, &ft_cmp);
			else
				path->right = btree_create_node(item);
		}
		else
		{
			if (path->left)
				btree_insert_data(&path->left, item, &ft_cmp);
			else
				path->left = btree_create_node(item);
		}
	}
	else
		*root = btree_create_node(item);
}

void	btree_apply_prefix(t_btree *root, void(*applyf) (void *))
{
	applyf(root->item);
	if (root->left)
		btree_apply_prefix(root->left, &ft_putnbr);
	if (root->right)
		btree_apply_prefix(root->right, &ft_putnbr);
}

int		main(void)
{
	t_btree	*root;
	int		tab0[1] = {12};
	int		tab1[1] = {8};
	int		tab2[1] = {14};
	int		tab3[1] = {5};
	int		tab4[1] = {17};

	root = 0;
	btree_insert_data(&root, tab0, &ft_cmp);
	btree_insert_data(&root, tab1, &ft_cmp);
	btree_insert_data(&root, tab2, &ft_cmp);
	btree_insert_data(&root, tab3, &ft_cmp);
	btree_insert_data(&root, tab4, &ft_cmp);
	btree_apply_prefix(root, &ft_putnbr);
	return (0);
}
