/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 08:51:58 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/06 16:41:03 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	print_grid(int **grid)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(grid[i][j++] + '0');
			ft_putchar(' ');
		}
		ft_putchar('\n');
		i++;
	}
}
