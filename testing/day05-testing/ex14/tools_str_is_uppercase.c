/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_str_is_uppercase.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:58:53 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/02 09:45:22 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main()
{
	char a[] = "hello";
	char b[] = "HELLO";

	printf("%i\n%i\n", ft_str_is_uppercase(a), ft_str_is_uppercase(b));
}
