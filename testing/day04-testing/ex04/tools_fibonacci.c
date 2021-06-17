/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_fibonacci.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/29 12:36:18 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
int	ft_fibonacci(int index);

int		main(void)
{
	int i = 12;
	int j = 0;
	int k = -2;
	
	printf("element number %d of fibonacci is: %d\n", i, ft_fibonacci(i));
	printf("element number %d of fibonacci is: %d\n", j, ft_fibonacci(j));
	printf("negative number %d will return -1: %d\n", k, ft_fibonacci(k));
	return (0);
}
