/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raho <raho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:58:07 by raho              #+#    #+#             */
/*   Updated: 2021/06/13 09:56:10 by raho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

#define SIZE 1

/*
** read_input's rules had to be squished in order to fit the function into
** 25 lines. Here is a more readable one:
**if((*buf == 'o' || *buf == '/' || *buf == 'C' || *buf == 'A' || *buf == '\\')
**	|| (*buf == '-' && str[index - 1] != '-')
**	|| (*buf == 'B' && str[index - 1] != 'B')
**	|| (*buf == '*' && str[index - 1] != '*')
**	|| (*buf == '|' && str[index - 1] != '|'))
**{
**	str[index] = *buf;
**	index++;
**}
*/

void		ft_putchar(char c);

void		ft_putstr(char *str);

int			ft_count(int width, int height)
{
	width = width - height;
	width = width / height;
	return (width);
}

int			ft_read_input(void)
{
	char	buf[SIZE];
	char	str[7];
	int		ret;
	int		index;
	int		width;
	int		height;
	
	index = 0;
	width = 0;
	height = 0;
	while ((ret = read(0, buf, SIZE)))
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
		return (0);
	}
	printf("width = %d\n height = %d\n", width, height);
	ft_putstr(str);
	return (0);
}

int			main(void)
{
	ft_read_input();
	
	return (0);
}
