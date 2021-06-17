/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 14:18:58 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/03 15:45:44 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*range;
	int		i;

	range = 0;
	i = 0;
	if (min < max)
	{
		range = (int *)malloc(sizeof(*range) * (max - min));
		if (range != 0)
		{
			while (min < max)
			{
				range[i] = min;
				i++;
				min++;
			}
		}
	}
	return (range);
}
