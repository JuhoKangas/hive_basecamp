/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 10:56:29 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/29 11:04:18 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	if (power >= 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	return (0);
}
