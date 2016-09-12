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

void	btree_apply_prefix(t_btree *root, void(*applyf) (void *))
{
	int *stock;

	stock = root->item;
	applyf(stock);
	if (root->left)
		btree_apply_prefix(root->left, &ft_putnbr);
	if (root->right)
		btree_apply_prefix(root->right, &ft_putnbr);
}

void	add_elem_btree(t_btree *root, void *item)
{
	int *stock;
	int *stock2;

	stock2 = item;
	stock = root->item;
	if (*stock2 >= *stock)
	{
		if (root->right)
		{
			root = root->right;
			add_elem_btree(root, item);
		}
		else
			root->right = btree_create_node(item);
	}
	else
	{
		if (root->left)
		{
			root = root->left;
			add_elem_btree(root, item);
		}
		else
			root->left = btree_create_node(item);
	}
}

int		main(void)
{
	t_btree *root;
	int tab1[1] = {11};
	int tab2[1] = {8};
	int tab3[1] = {14};
	int tab4[1] = {5};
	int tab5[1] = {10};
	int tab6[1] = {13};
	int tab7[1] = {15};

	root = btree_create_node(tab1);
	add_elem_btree(root, tab2);
	add_elem_btree(root, tab3);
	add_elem_btree(root, tab4);
	add_elem_btree(root, tab5);
	add_elem_btree(root, tab6);
	add_elem_btree(root, tab7);
	btree_apply_prefix(root, &ft_putnbr);
	return (0);
}
