/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_strcpapitalize.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:31:08 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/01 20:00:44 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

int		main()
{
	char a[] = "asdkjh123 Hello.this.is 43-erg !¤#&/hello hello .hello";

	printf("%s\n", ft_strcapitalize(a));
}