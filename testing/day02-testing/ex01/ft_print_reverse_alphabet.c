/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 16:19:04 by jkangas           #+#    #+#             */
/*   Updated: 2021/05/27 05:36:26 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_reverse_alphabet()
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c);
		c = c - 1;
	}
}

int		main()
{
	ft_print_reverse_alphabet();
	return (0);
}
