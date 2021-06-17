/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_r00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:44:09 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/13 18:22:36 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checks.h"

int		check_short(int width, int height, char *str)
{
	int i;

	i = 0;
	if (width == 1 && height > 1)
	{
		while (i < height)
		{
			if (str[i] != str[i])
				return (0);
		}
	}
}

int		check_r00(int width, int height, char *str)
{
	int i;
	char charstr[] = "o-o|o-o";

	i = 0;
	if (width == 1 && height == 1)
	{
		if (str[i] == 'o')
			return (1);
	}
	if (height == 1 || width == 1)
	{
		while (i < 3)
		{
			if (str[i] != height[i])
				return (0);
			i++;
		}
		
	}
	if (ft_strcmp(charstr, str) == 0)
		return (1);
	return (0);
}
