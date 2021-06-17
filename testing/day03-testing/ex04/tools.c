/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/28 21:18:15 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);


int main()
{
	int i, j;
	i = 50;
	j = 4;

	printf("The value of i is: %d\n", i);
	printf("The value of j is: %d\n", j);
	
	ft_ultimate_div_mod(&i, &j);

	printf("The value of i after ft is: %d\n", i);
	printf("The value of j after ft is: %d\n", j);
}

