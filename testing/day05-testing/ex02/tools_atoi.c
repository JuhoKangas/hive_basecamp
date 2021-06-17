/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_atoi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 15:53:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/08 12:02:46 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str);

int		main(void)
{
	char c[] = "-12-14";
	char d[] = "--87364";
	char e[] = "Hello";
	char f[] = "+345";
	char g[] = "  666\t666";
	char h[] = "\n666";
	char i[] = "-2147483649";
	
	printf("\n%s with atoi: %i\n", c, atoi(c));
	printf("%s with own ft: %i\n\n", c, ft_atoi(c));
	printf("%s with atoi: %i\n", d, atoi(d));
	printf("%s with own ft: %i\n\n", d, ft_atoi(d));
	printf("%s with atoi: %i\n", e, atoi(e));
	printf("%s with own ft: %i\n\n", e, ft_atoi(e));
	printf("%s with atoi: %i\n", f, atoi(f));
	printf("%s with own ft: %i\n\n", f, ft_atoi(f));
	printf("%s with atoi: %i\n", g, atoi(g));
	printf("%s with own ft: %i\n\n", g, ft_atoi(g));
	printf("\\n666 with atoi: %i\n", atoi(h));
	printf("\\n666 with own ft: %i\n\n", ft_atoi(h));
	printf("%s with atoi: %i\n", i,atoi(i));
	printf("%s with own ft: %i\n\n", i,ft_atoi(i));

	return (0);
}
