/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copygrid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <acamaras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 14:43:03 by acamaras          #+#    #+#             */
/*   Updated: 2021/06/16 17:35:30 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		get_width(char *str)
{
	int		i;
	int		width;

	i = 0;
	width = 0;
	while (str[i] != '\n')
	{
		if (str[i++] == '\0')
			return (0);
		width++;
	}
	return (width);
}

int		get_length(char *str)
{
	int length;
	int i;

	i = 0;
	length = 0;
	while (str[i] != '\0')
	{
		if (str[i++] == '\n')
			length++;
	}
	return (length);
}

int		**copy_grid(int **grid, char *str, int width, int length)
{
	int		i;
	int		a;
	int		b;

	i = 0;
	b = 0;
	grid = (int**)malloc(sizeof(int*) * width);
	while (b < length)
	{
		a = 0;
		grid[b] = (int*)malloc(sizeof(int) * length);
		while (a < width)
		{
			if (str[i] == '.')
				grid[b][a] = 1;
			else
				grid[b][a] = 0;
			a++;
			i++;
		}
		i++;
		b++;
	}
	return (grid);
}
