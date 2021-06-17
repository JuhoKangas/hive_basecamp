/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:18:48 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/03 18:23:47 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*args;
	int		i;
	int		j;
	int		k;
	int		mem;

	mem = 0;
	i = 1;
	k = 0;
	while (i < argc)
		mem = mem + ft_strlen(argv[i++]) + 1;
	args = (char*)malloc(sizeof(char) * mem);
	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
			args[k++] = argv[i][j++];
		if (i == argc - 1)
			args[k++] = '\0';
		else
			args[k++] = '\n';
		i++;
	}
	return (args);
}
