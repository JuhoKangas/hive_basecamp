/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 14:34:29 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/02 15:09:58 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char *argv[])
{
	int i;

	i = 0;
	if (argc == 1)
	{
		while (argv[0][i])
			ft_putchar(argv[0][i++]);
		ft_putchar('\n');
	}
	return (0);
}
