/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_r04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:44:52 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/13 12:47:22 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checks.h"

int		check_r04(int width, int height, char *str)
{
	char width_or_height_1[] = "ABC";
	char charstr[] = "ABCBCBA";

	if (width == 1 && height == 1)
	{
		if (str[0] == 'A')
			return (1);
	}
	if (height == 1 || width == 1)
	{
		if (ft_strcmp(str, width_or_height_1) == 0)
			return (1);
	}
	if (ft_strcmp(charstr, str) == 0)
		return (1);
	return (0);
}
