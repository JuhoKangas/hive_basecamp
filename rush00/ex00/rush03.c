/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/30 10:29:26 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/30 11:19:38 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_extremities(int x)
{
	ft_putchar('A');
	while ((x - 1) > 1)
	{
		ft_putchar('B');
		x--;
	}
	if (x > 1)
		ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int tx;
	int ty;

	if (x > 0 && y > 0)
	{
		ft_print_extremities(x);
		ty = 1;
		while ((y - 2) >= ty)
		{
			tx = 1;
			while (x >= tx)
			{
				if ((tx > 1 && tx < x) && (ty >= 1 && ty < y))
					ft_putchar(' ');
				else if ((ty >= 1 && ty < y) && (tx == 1 || tx == x))
					ft_putchar('B');
				tx++;
			}
			ft_putchar('\n');
			ty++;
		}
		if (y > 1)
			ft_print_extremities(x);
	}
}
