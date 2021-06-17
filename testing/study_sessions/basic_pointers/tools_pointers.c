/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_pointers.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 10:17:10 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/08 10:20:55 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_pointer(int *ptr1, int *ptr2);

int		main()
{
	int a = 10;
	int b = 20;
	printf("The two numbers are %i and %i\n", a, b);
	
	ft_pointer(&a, &b);
	printf("The two numbers are %i and %i\n", a, b);
}