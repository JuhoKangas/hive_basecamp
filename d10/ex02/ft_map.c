/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:52:16 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/07 17:29:28 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *map;
	int i;

	i = -1;
	if (!(map = (int *)malloc(sizeof(int) * length)))
		return (NULL);
	while (++i < length)
		map[i] = f(tab[i]);
	return (map);
}
