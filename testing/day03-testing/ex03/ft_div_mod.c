/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 16:57:47 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/28 21:17:16 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	// This function divides parameters a by b 
	// and stores the result in the int pointed by div. 
	// It also stores the remainder of the division of a by b in the int pointed by mod.

	*div = a / b;
	*mod = a % b;
}
