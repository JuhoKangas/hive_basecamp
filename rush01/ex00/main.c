/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:34:19 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/06 14:37:07 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		main(int argc, char **argv)
{
	int **grid;
	int i;

	i = 0;
	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	grid = (int **)malloc(sizeof(int *) * 9);
	if (!(args(grid, argc, argv)))
	{
		ft_putstr("Error\n");
		return (0);
	}
	if (solve_sudoku(grid, 0, 0) == 1)
	{
		print_grid(grid);
		free(grid);
	}
	else
		ft_putstr("Error\n");
}
