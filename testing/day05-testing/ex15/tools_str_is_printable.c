/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_str_is_printable.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:58:53 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/01 20:37:20 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_printable(char *str);

int		main()
{
	char a[] = "qw123657sdfgin49e076npqhb 034hello@";
	char b[] = "\nhello";

	printf("%i\n%i\n", ft_str_is_printable(a), ft_str_is_printable(b));
}
