/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/27 17:58:05 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
void	ft_print_comb2(void);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return;	
}

int		main(void)
{
	ft_print_comb2();
	return (0);
}
