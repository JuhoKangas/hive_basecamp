/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/31 19:15:03 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	// char c[] = "-12-14";
	char dest[] = "Hello there general Kenobi";
	char sorc[] = "Hi Kenny!!";
	
	printf("The string is \"Hello there general Kenobi\": %s\n", dest);
	ft_strcpy(dest, sorc);
	printf("It should be shorter now: %s\n", dest);

	char src[] = "Waffles";
	char dst[] = "Pancakes";
	
	printf("\n%s\n", src);
	printf("%s\n", dst);
	
	ft_strcpy(dst, src);
	
	printf("\nAfter copying: %s\n", dst);

	return (0);
}
