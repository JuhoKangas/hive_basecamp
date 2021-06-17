/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 08:40:32 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/06 16:43:13 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_row(int **grid, int row, int num)
{
	int col;

	col = 0;
	while (col < 9)
	{
		if (grid[row][col++] == num)
			return (0);
	}
	return (1);
}

int		check_col(int **grid, int col, int num)
{
	int row;

	row = 0;
	while (row < 9)
	{
		if (grid[row++][col] == num)
			return (0);
	}
	return (1);
}

int		check_box(int **grid, int box_row, int box_col, int num)
{
	int row;
	int col;

	row = 0;
	while (row < 3)
	{
		col = 0;
		while (col < 3)
		{
			if (grid[row + box_row][col + box_col] == num)
				return (0);
			col++;
		}
		row++;
	}
	return (1);
}

int		check_placement(int **grid, int row, int col, int num)
{
	int row_start;
	int col_start;

	row_start = row - row % 3;
	col_start = col - col % 3;
	if (check_row(grid, row, num)
		&& check_col(grid, col, num)
		&& check_box(grid, row_start, col_start, num)
		&& grid[row][col] == 0)
	{
		return (1);
	}
	return (0);
}
