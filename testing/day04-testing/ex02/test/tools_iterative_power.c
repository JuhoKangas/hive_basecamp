/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_iterative_power.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/29 20:27:11 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
int	ft_iterative_power(int nb, int power);

int		main(void)
{
	int i = 10;
	int j = 10;
	
	printf("%d to the power of %d is %d\n", i, j, ft_iterative_power(i, j));
	return (0);
}
