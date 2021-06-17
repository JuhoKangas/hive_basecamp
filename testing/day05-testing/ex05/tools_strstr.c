/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_strstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 06:19:58 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/01 12:39:37 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main()
{
	char str[] = "...and Heaven have mercy on us all - Presbyterians and Pagans alike - for we are all somehow dreadfully cracked about the head, and sadly need mending.";
	char find[] = "and Pa";
	char str2[] = "...and Heaven have mercy on us all - Presbyterians and Pagans alike - for we are all somehow dreadfully cracked about the head, and sadly need mending.";
	char find2[] = "";
	char str3[] = "...and Heaven have mercy on us all - Presbyterians and Pagans alike - for we are all somehow dreadfully cracked about the head, and sadly need mending.";
	char find3[] = "hello";
	
	printf("\nwith strstr: %s\n", strstr(str, find));
	printf("with ft_strstr: %s\n", ft_strstr(str, find));
	printf("\nwith strstr: %s\n", strstr(str2, find2));
	printf("with ft_strstr: %s\n", ft_strstr(str2, find2));
	printf("\nwith strstr: %s\n", strstr(str3, find3));
	printf("with ft_strstr: %s\n\n", ft_strstr(str3, find3));
}