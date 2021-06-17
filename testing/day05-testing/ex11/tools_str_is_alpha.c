/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_str_is_alpha.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 19:58:53 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/02 09:43:06 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str);

int		main()
{
	char a[] = "Hello";

	if (ft_str_is_alpha(a))
		printf("it's all alphabetical\n");
	else
		printf("It's something else than just alpha\n");
}
