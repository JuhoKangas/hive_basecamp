/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <acamaras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:35:58 by acamaras          #+#    #+#             */
/*   Updated: 2021/06/16 18:03:51 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		main(int argc, char **argv)
{
	char	*str;
	int		**grid;
	int		width;
	int		length;

	(void)argc;
	str = ft_read_stdin(argv);
	grid = NULL;
	width = get_width(str);
	length = get_length(str);
	grid = copy_grid(grid, str, get_width(str), get_length(str));
	print_grid(grid, get_width(str), get_length(str));
	return (0);
}
