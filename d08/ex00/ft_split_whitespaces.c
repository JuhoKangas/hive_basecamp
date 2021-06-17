/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 19:00:25 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/05 14:08:35 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_wordcount(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			words++;
		while (str[i + 1] && str[i] != ' ' && str[i] != '\n' && str[i] != '\t')
			i++;
		i++;
	}
	return (words);
}

int		ft_strlen(char *str, int i)
{
	int count;

	count = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;

	if (!(res = malloc(sizeof(char*) * (ft_wordcount(str) + 1))))
		return (NULL);
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if (!(res[j] = malloc(sizeof(char) * ft_strlen(str, i) + 1)))
				return (NULL);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				res[j][k++] = str[i++];
			res[j++][k] = '\0';
		}
	}
	res[j] = NULL;
	return (res);
}

[['F', ' ', ' ', '\0'], ['w', 'o', 'r', '\0'], [null]]