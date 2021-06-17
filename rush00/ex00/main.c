/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 16:57:43 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/12 16:00:08 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	rush(int x, int y);

int		main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	(void)argc;
	i = atoi(&argv[1][0]);
	j = atoi(&argv[2][0]);
	rush(i, j);
	return (0);
}
