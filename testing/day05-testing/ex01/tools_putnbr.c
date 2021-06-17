/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/31 09:11:03 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
void	ft_putnbr(int nb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return;	
}

int		main(void)
{
	ft_putnbr(0);
	ft_putchar('\n');
	ft_putnbr(147483648);
	ft_putchar('\n');
	ft_putnbr(-8176312);
	ft_putchar('\n');
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	return (0);
}
