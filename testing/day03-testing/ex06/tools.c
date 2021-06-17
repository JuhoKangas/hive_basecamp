/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/29 09:45:57 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return;	
}

int		main(void)
{
	char x[] = "Helloworld";
	int i;
	i = ft_strlen(x);
	printf("%d\n", i);
	
	return (0);
}
