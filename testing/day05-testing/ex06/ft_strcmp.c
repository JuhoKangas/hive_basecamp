/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 14:38:02 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/01 14:52:35 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	if (*s1 && *s1 == *s2)
	{
		return (ft_strcmp(++s1, ++s2));
	}
	return (*s1 - *s2);
}