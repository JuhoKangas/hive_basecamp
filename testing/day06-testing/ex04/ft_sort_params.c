/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 15:51:34 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/02 17:40:23 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);	
}

int		main(int argc, char *argv[])
{
	int i;
	int j;
	int val;

	i = 1;
	j = 0;
	val = 32;
	while (argc > 1)
	{
		while (i < argc - 1)
		{
			if (argv[i][j] == val)
			{
				while (argv[i][j])
					ft_putchar(argv[i][j++]);
				ft_putchar('\n');
				argc--;
				j = 0;
			}
			i++;
			val++;
		}
	}
	return (0);
}
