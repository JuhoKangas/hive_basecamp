/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 11:25:39 by atenhune          #+#    #+#             */
/*   Updated: 2021/06/06 16:39:46 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		args(int **grid, int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	while (i < argc - 1)
	{
		grid[i] = (int *)malloc(sizeof(int) * 9);
		j = 0;
		while (j < 9)
		{
			if (argv[i + 1][j] == '.')
				grid[i][j] = 0;
			else if (argv[i + 1][j] >= '1' && argv[i + 1][j] <= '9')
				grid[i][j] = argv[i + 1][j] - '0';
			else
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
