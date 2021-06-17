/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_sqrt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/29 13:03:44 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
int	ft_sqrt(int nb);

int		main(void)
{
	int i = 32767;
	int j = 144;
	int k = 361;
	int l = 21474835;
	
	printf("square root of %d is %d\n", i, ft_sqrt(i));
	printf("square root of %d is %d\n", j, ft_sqrt(j));
	printf("square root of %d is %d\n", k, ft_sqrt(k));
	printf("square root of %d is %d\n", l, ft_sqrt(l));

	return (0);
}
