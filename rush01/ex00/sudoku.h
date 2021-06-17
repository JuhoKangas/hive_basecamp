/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/05 11:36:34 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/06 14:25:43 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdlib.h>

int		check_row(int **grid, int row, int num);
int		check_col(int **grid, int col, int num);
int		check_box(int **grid, int box_row, int box_col, int num);
int		check_placement(int **grid, int row, int col, int num);
void	print_grid(int **grid);
int		solve_sudoku(int **grid, int row, int col);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		args(int **grid, int argc, char **argv);

#endif
