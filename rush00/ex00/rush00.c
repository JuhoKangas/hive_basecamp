/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:24:14 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/30 11:12:29 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	rush(int x, int y)
{
	int tx;
	int ty;

	if (x < 1 || y < 1)
		return ;
	ty = 1;
	while (y >= ty)
	{
		tx = 1;
		while (x >= tx)
		{
			if ((tx > 1 && tx < x) && (ty > 1 && ty < y))
				ft_putchar(' ');
			else if ((tx > 1 && tx < x) && (ty == 1 || ty == y))
				ft_putchar('-');
			else if ((ty > 1 && ty < y) && (tx == 1 || tx == x))
				ft_putchar('|');
			else
				ft_putchar('o');
			tx++;
		}
		ft_putchar('\n');
		ty++;
	}
}
