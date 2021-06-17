/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/28 19:29:07 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return;	
}

int		main(void)
{
	char x[] = "Hello";
	ft_putstr(x);
		
	ft_putchar('\n');
	return (0);
}
