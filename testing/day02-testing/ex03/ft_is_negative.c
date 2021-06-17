/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 08:27:22 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/27 16:45:10 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_is_negative(int n)
{
	if (n > 0 || !n)
	{
		ft_putchar('P');
	}
	else if (n < 0)
	{
		ft_putchar('N');
	}
}

int		main(void)
{
	ft_is_negative(0);
	return (0);
}
