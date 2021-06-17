/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_strlowcase.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:45:19 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/01 16:15:17 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main()
{
	char b[] = "hello aaaAaaAA zzZZZzzworld12343 /234098 hello";
	char c[] = "Hello aaaaAAA zzzZZzzzzWORld546456  234 hihi i HELLO";

	printf("%s\n%s\n\n", b, c);

	ft_strlowcase(b);
	ft_strlowcase(c);

	printf("%s\n%s\n", b, c);
}