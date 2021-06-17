/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tool_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:07:12 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/08 10:11:31 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		recursion(int x);

int		main()
{
	int a;
	// int b;

	a = 5;
	printf("This is the number after recursion: %i\n", recursion(a));
}