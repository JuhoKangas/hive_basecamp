/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 09:00:52 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/06 16:39:20 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		solve_sudoku(int **grid, int row, int col)
{
	int num;

	if (row == 8 && col == 9)
		return (1);
	if (col == 9)
	{
		row++;
		col = 0;
	}
	if (grid[row][col] > 0)
		return (solve_sudoku(grid, row, col + 1));
	num = 1;
	while (num <= 9)
	{
		if (check_placement(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve_sudoku(grid, row, col + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
