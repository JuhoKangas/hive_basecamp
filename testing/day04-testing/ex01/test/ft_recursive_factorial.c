/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 09:51:57 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/29 20:04:15 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int        ft_recursive_factorial(int nb)
{
    if (nb >= 1)
    {
        return (nb * ft_recursive_factorial(nb - 1));
    }
    if (nb == 0)
    {
        return (1);
    }

    return (0);
}
