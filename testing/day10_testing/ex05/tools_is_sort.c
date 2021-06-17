/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_is_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 15:33:27 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/09 10:02:52 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strcmp(int s1, int s2)
{
	return (s1 - s2);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int));

int		main()
{
	int i[] = {1, 2, 5, 3, 4, 5, 7, 13, 45, 56};

	if (ft_is_sort(i, 9, ft_strcmp))
		printf("Yeah they are sorted\n");
	else
		printf("Not sorted boiiii\n");
}