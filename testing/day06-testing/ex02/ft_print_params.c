/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:57:12 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/02 15:16:24 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);	
}

int		main(int argc, char *argv[])
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (--argc)
	{
		while (argv[i][j])
			ft_putchar(argv[i][j++]);
		j = 0;
		i++;
		ft_putchar('\n');
	}
	return (0);
}
