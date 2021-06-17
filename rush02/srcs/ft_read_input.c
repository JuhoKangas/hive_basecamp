/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_input.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raho <raho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:58:07 by raho              #+#    #+#             */
/*   Updated: 2021/06/13 18:53:41 by raho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int			ft_count(int width, int height)
{
	if (height != 0)
	{
		width = width - height;
		width = width / height;
		return (width);
	}
	else
		return (0);
}

void		ft_read_input(int width, int height, int ret, int index)
{
	char	buf[1];
	char	str[8];

	while ((ret = read(0, buf, 1)))
	{
		width++;
		if ((*buf == 'o' || *buf == '/' || *buf == 'C' || *buf == 'A' || \
			*buf == '\\') || (*buf == '-' && str[index - 1] != '-') || \
			(*buf == 'B' && str[index - 1] != 'B') || (*buf == '*' && \
			str[index - 1] != '*') || (*buf == '|' && str[index - 1] != '|'))
		{
			str[index] = *buf;
			index++;
		}
		if (*buf == '\n')
			height++;
	}
	str[index] = '\0';
	width = ft_count(width, height);
	if (ret == -1)
	{
		ft_putstr("Read failed\n");
		return ;
	}
	new_check(str, width, height);
}
