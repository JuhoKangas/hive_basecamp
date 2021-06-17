/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_strdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 09:05:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/03 15:13:04 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	char a[] = "Hi there this is a string!";
	char *b;
	char c[] = "Hi there this is a string!";
	char *d;

	// printf("%s\n", b);

	b = ft_strdup(a);
	d = strdup(c);

	printf("%s\n", b);
	printf("%s\n", d);

	if (strcmp(b, c) == 0)
		printf("Fuck yeah!\n");
}
