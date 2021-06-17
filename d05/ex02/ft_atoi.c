/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 09:18:04 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/31 16:57:57 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_num(char c)
{
	return (c >= '0' && c <= '9') ? 1 : 0;
}

int		ft_atoi(char *str)
{
	int i;
	int num;
	int sign;

	sign = 1;
	i = 0;
	num = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == '\v')
		i++;
	if (*str == '\0')
		return (0);
	if (str[i] == '-' || str[i] == '+')
		sign = 1 - 2 * (str[i++] == '-');
	while (str[i] != '\0')
	{
		if (ft_is_num(str[i]) == 0)
			break ;
		num = num * 10 + str[i++] - '0';
	}
	return (sign * num);
}
