/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_iterative_factorial.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/29 19:51:22 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
int	ft_iterative_factorial(int nb);

int		main(void)
{
	int i = 12;
	int j = 5;
	int k = 7;
	int l = -1;

	printf("the factorial of %d is %d\n", i, ft_iterative_factorial(i));
	printf("the factorial of %d is %d\n", j, ft_iterative_factorial(j));
	printf("the factorial of %d is %d\n", k, ft_iterative_factorial(k));
	printf("the factorial of %d is %d\n", l, ft_iterative_factorial(l));
	return (0);
}
