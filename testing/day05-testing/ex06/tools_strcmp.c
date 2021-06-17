/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_strcmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:41:34 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/08 10:49:52 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *s1, char *s2);

int		main()
{
	char *str1 = "This is the first sentence";
	char *str2 = "This is the second sentence";
	char str3[] = "This is char array";
	char str4[] = "This is char array";
	

	printf("\n==============Testing String literals:\n");
	if(ft_strcmp(str1, str2) == 0)
	{
		printf("\nThey are the same sentence\n");
		printf("function returned %i\n\n", ft_strcmp(str1, str2));
	}
	else
	{
		printf("They are not the same sentence\n");
		printf("function returned %i\n\n", ft_strcmp(str1, str2));
	}

	if(strcmp(str1, str2) == 0)
	{
		printf("They are the same sentence\n");
		printf("function returned %d", strcmp(str1, str2));
	}
	else
	{
		printf("They are not the same sentence\n");
		printf("function returned %i", strcmp(str1, str2));
	}

	printf("\n\n==============Testing Character arrays:");
	
	if(ft_strcmp(str3, str4) == 0)
	{
		printf("\nThey are the same sentence\n");
		printf("function returned %i\n\n", ft_strcmp(str3, str4));
	}
	else
	{
		printf("They are not the same sentence\n");
		printf("function returned %i\n\n", ft_strcmp(str3, str4));
	}

	if(strcmp(str3, str4) == 0)
	{
		printf("They are the same sentence\n");
		printf("function returned %d\n\n", strcmp(str3, str4));
	}
	else
	{
		printf("They are not the same sentence\n");
		printf("function returned %i\n\n", strcmp(str3, str4));
	}
}