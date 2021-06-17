/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 06:47:04 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/29 19:51:05 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int num;
	int factorial;
	
	if(nb <= 0)
	{
		return(0);	
	}
	factorial = 1;
	num = nb;
	while (num > 0)
	{
		factorial *= num;
		num--;
	}
	
	return (factorial);
}
