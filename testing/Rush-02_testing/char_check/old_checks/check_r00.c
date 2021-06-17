/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_r00.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:44:09 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/12 18:35:11 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	side_char(int index, int width)
{
	if (index == 0 || index == (width - 1))
		return ('|');
	else
		return ('-');
}

int		check_r00(int width, int length, char **rush_grid)
{
	int index;
	int row;

	row = -1;
	while (++row < length)
	{
		index = -1;
		while (++index < width)
		{
			if (check_corner(index, row, width, length) == 2)
			{
				if (rush_grid[row][index] != 'o')
					return (0);
			}
			else if (check_corner(index, row, width, length) == 1)
			{
				if (rush_grid[row][index] != side_char(index, width))
					return (0);
			}
			else if (rush_grid[row][index] != ' ')
				return (0);
		}
	}
	return (1);
}