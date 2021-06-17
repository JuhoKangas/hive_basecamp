/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_str_is_numeric.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:58:53 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/01 20:20:02 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_numeric(char *str);

int		main()
{
	char a[] = "123876123";
	char b[] = "Hello";
	char c[] = "-123";

	printf("%i\n%i\n%i\n",(ft_str_is_numeric(a)), (ft_str_is_numeric(b)), (ft_str_is_numeric(c)));
}
