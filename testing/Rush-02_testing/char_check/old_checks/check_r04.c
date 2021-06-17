/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_r04.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 14:44:52 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/12 18:46:04 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	corner_char04(int index, int row, int w, int l)
{
	if (index == 0 && row == 0 || index == (w - 1) && row == (l - 1))
		return ('A');
	else
		return ('C');
}

int		check_r04(int width, int length, char **rush_grid)
{
	int index;
	int row;

	row = 0;
	while (row < length)
	{
		index = 0;
		while (index < width)
		{
			if (check_corner(index, row, width, length) == 2)
			{
				if (rush_grid[row][index] != corner_char04(index, row, width, length))
					return (0);
			}
			else if (check_corner(index, row, width, length) == 1)
			{
				if (rush_grid[row][index] != 'B')
					return (0);
			}
			else if (rush_grid[row][index] != ' ')
				return (0);
		}
	}
	return (1);
}