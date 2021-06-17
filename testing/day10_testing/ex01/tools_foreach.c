/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_foreach.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 16:39:30 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/07 16:49:05 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_foreach(int *tab, int length, void(*f)(int));

void	ft_printnbr(int num)
{
	printf("%d\n", num);
}

int		main(void)
{
	int b[] = {12, 4, 69, 123, 5, 6};
	ft_foreach(b, 6, ft_printnbr);
}
