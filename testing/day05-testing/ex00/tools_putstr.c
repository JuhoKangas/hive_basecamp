/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_putstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/08 09:19:42 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
void	ft_putstr(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);	
}

int		main(void)
{
	char x[] = "Hello There!";
	
	ft_putstr(x);
	ft_putchar('\n');
	return (0);
}
