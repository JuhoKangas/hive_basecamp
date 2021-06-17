/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_strncmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:41:34 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/02 09:35:44 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main()
{
	char *str1 = "This is the first sentence";
	char *str2 = "This is the first sentence!";
	unsigned int i = 10;
	
	if(ft_strncmp(str1, str2, i) == 0)
	{
		printf("\nThey are the same sentence\n");
		printf("function returned %i\n\n", ft_strncmp(str1, str2, i));
	}
	else
	{
		printf("They are not the same sentence\n\n");
		printf("function returned %i\n\n", ft_strncmp(str1, str2, i));
	}
	printf("===============================================\n");

	if(strncmp(str1, str2, i) == 0)
	{
		printf("They are the same sentence\n");
		printf("function returned %d\n\n", strncmp(str1, str2, i));
	}
	else
	{
		printf("They are not the same sentence\n\n");
		printf("function returned %i\n\n", strncmp(str1, str2, i));
	}
}