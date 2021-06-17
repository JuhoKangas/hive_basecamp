/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 10:11:44 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/03 19:13:16 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (max > min)
	{
		*range = (int *)malloc(sizeof(**range) * (max - min));
		if (*range != 0)
		{
			while (min < max)
				(*range)[i++] = min++;
			return (i);
		}
	}
	return (0);
}
