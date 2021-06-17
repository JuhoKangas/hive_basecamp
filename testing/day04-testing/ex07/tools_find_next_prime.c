/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_find_next_prime.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/29 16:05:12 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
int	ft_find_next_prime(int nb);

int		main(void)
{
	int i = 7;
	int j = 7591;
	int k = 6825;
	int l = 63;
	int m = -10;
	
	
	printf("for %d the next prime number is %d\n", i, ft_find_next_prime(i));
	printf("for %d the next prime number is %d\n", j, ft_find_next_prime(j));
	printf("for %d the next prime number is %d\n", k, ft_find_next_prime(k));
	printf("for %d the next prime number is %d\n", l, ft_find_next_prime(l));
	printf("for %d the next prime number is %d\n", m, ft_find_next_prime(m));

	return (0);
}
