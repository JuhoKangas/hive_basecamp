/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:57:12 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/02 15:55:34 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (--argc != 0)
	{
		while (argv[argc][i])
			ft_putchar(argv[argc][i++]);
		i = 0;
		ft_putchar('\n');
	}
	return (0);
}
