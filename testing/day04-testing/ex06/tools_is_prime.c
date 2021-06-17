/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_is_prime.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/29 15:11:57 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
int	ft_is_prime(int nb);

int		main(void)
{
	int i = 7;
	int j = 8;
	int k = 1299827;
	int l = 36;
	int m = -10;
	
	
	printf("%d is a prime number: %d\n", i, ft_is_prime(i));
	printf("%d is not a prime number: %d\n", j, ft_is_prime(j));
	printf("%d is a prime number: %d\n", k, ft_is_prime(k));
	printf("%d is not a prime number: %d\n", l, ft_is_prime(l));
	printf("%d is not a prime number: %d\n", m, ft_is_prime(m));

	return (0);
}
