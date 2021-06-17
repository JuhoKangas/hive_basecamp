/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/29 10:17:53 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
int	ft_recursive_factorial(int nb);

int		main(void)
{
	int i = 12;
	int j = 5;
	int k = 7;
	int l = -1;

	printf("the factorial of %d is %d\n", i, ft_recursive_factorial(i));
	printf("the factorial of %d is %d\n", j, ft_recursive_factorial(j));
	printf("the factorial of %d is %d\n", k, ft_recursive_factorial(k));
	printf("the factorial of %d is %d\n", l, ft_recursive_factorial(l));
	return (0);
}
