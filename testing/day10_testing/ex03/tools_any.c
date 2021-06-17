/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_any.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 08:34:26 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/08 13:57:05 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_any(char **tab, int(*f)(char*));

int		str_contains_a(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int main()
{
    char    *string[] = {"these","are","too","long", 0};
    char    *string2[] = {"there","isnt","first","letter","here", 0};

    printf("%i \n", ft_any(string, str_contains_a));
    printf("%i \n", ft_any(string2, str_contains_a));
}