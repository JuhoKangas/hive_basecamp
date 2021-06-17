/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 12:40:33 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/13 12:51:31 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checks.h"
#include <stdio.h>
#include <stdlib.h>

int		main(int argc, char **argv)
{
	int i = 0;
	char str[8];

	(void)argc;
	while (argv[1][i])
	{
		str[i] = argv[1][i];
		i++;
	}
	str[i] = '\0';
	printf("%i", check_r00(5, 5, str));
	printf("%i", check_r01(5, 5, str));
	printf("%i", check_r02(5, 5, str));
	printf("%i", check_r03(5, 5, str));
	printf("%i", check_r04(5, 5, str));
}
