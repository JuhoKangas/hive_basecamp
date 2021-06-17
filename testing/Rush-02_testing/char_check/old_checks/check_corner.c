/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_corner.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 18:33:46 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/12 18:33:58 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_corner(int index, int row, int w, int l)
{
	int corner;

	corner = 0;
	if (index == 0 || index == (w - 1))
		corner += 1;
	if (row == 0 || row == (l - 1))
		corner += 1;
	return (corner);
}
