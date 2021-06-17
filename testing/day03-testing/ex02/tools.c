/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/29 09:16:04 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main( )
{
	int v1 = 11;
	int v2 = 77;
	printf("before swapping: %d %d\n", v1, v2 );
	
	ft_swap(&v1, &v2);
	
	printf("after swap: %d %d\n", v1, v2);
	return 0;
}
