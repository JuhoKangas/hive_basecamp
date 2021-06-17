/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_str_is_alpha.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:58:53 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/01 20:25:34 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_lowercase(char *str);

int		main()
{
	char a[] = "hello";
	char b[] = "Hello";

	printf("%i\n%i\n", ft_str_is_lowercase(a), ft_str_is_lowercase(b));
}
