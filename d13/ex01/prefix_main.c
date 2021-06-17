/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 17:45:41 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/12 07:52:32 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <unistd.h>
#include <stdio.h>

void	btree_apply_prefix(t_btree *root, void (*applyf)(void *));

void	ft_putstr(char *str)
{
	char c;

	while (*str)
	{
		c = *str;
		write(1, &c, 1);
		++str;
	}
}

int		main(void)
{
	t_btree	*node1;
	t_btree	*node2;
	t_btree	*node3;
	t_btree	*node4;
	t_btree	*node5;
	void	(*applyf)(void *);

	node1 = btree_create_node("1");
	node2 = btree_create_node("2");
	node3 = btree_create_node("3");
	node4 = btree_create_node("4");
	node5 = btree_create_node("5");
	node1->left = node2;
	node1->right = node3;
	node2->left = node4;
	node2->right = node5;
	printf("Should be 12453: \n");
	applyf = (void (*)(void *))ft_putstr;
	btree_apply_prefix(node1, applyf);
	ft_putstr("\n");
	return (0);
}