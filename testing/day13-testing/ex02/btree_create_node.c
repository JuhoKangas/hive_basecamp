/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 15:52:19 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/11 18:32:16 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>

t_btree	*btree_create_node(void *item)
{
	t_btree *element;

	element = (t_btree *)malloc(sizeof(t_btree));
	if (element)
	{
		element->left = NULL;
		element->right = NULL;
		element->item = item;
	}
	return (element);
}
