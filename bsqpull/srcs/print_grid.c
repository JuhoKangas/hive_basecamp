/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_grid.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <acamaras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 11:07:21 by llonnrot          #+#    #+#             */
/*   Updated: 2021/06/16 17:11:10 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	print_grid(int **grid, int width, int length)
{
	int i;
	int j;

	i = 0;
	while (i < width)
	{
		j = 0;
		while (j < length)
		{
			ft_putchar(grid[i][j] + '0');
			ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
