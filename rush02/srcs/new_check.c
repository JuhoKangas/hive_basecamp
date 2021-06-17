/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raho <raho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 16:49:55 by kfum              #+#    #+#             */
/*   Updated: 2021/06/13 19:59:43 by raho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int g_width;
int g_height;

int		check_r00(char x, char y, char z, char *str)
{
	int result;
	int i;

	result = 0;
	if (g_width > 0 && g_height > 0)
	{
		i = 0;
		while (i < g_width && str[i] != '0')
		{
			if (i == 0)
				result += (str[i] != x);
			else if (g_width >= 2 && i == g_width - 1)
				result += (str[i] != z);
			else
				result += (str[i] != y);
			++i;
		}
		if (i != g_width)
			return (1);
	}
	return (result);
}

void	print_pattern(int rush, int width, int height, int count)
{
	if (count > 0)
	{
		ft_putstr(" || ");
	}
	ft_putstr("[rush-0");
	ft_putnbr(rush);
	ft_putstr("] [");
	ft_putnbr(width);
	ft_putstr("] [");
	ft_putnbr(height);
	ft_putchar(']');
}

void	new_check(char *str, int width, int height)
{
	int	count;

	count = 0;
	if (*str == 'o')
		print_pattern(0, width, height, count++);
	else if (*str == '/')
		print_pattern(1, width, height, count++);
	else if (*str == 'A' && height == 1)
	{
		if (check_r00('A', 'B', 'A', str) == 0)
			print_pattern(2, width, height, count++);
		else if (check_r00('A', 'B', 'A', str) == 0)
			print_pattern(2, width, height, count++);
		if (check_r00('A', 'B', 'C', str) == 0)
			print_pattern(3, width, height, count++);
		if (check_r00('A', 'B', 'C', str) == 0)
			print_pattern(4, width, height, count++);
	}
	if (count == 0)
		ft_putstr("Not found.");
	ft_putchar('\n');
}
