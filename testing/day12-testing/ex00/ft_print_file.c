/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:11:15 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/11 18:11:04 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_lib.h"

#define BUFF_SIZE	8000

void	ft_print_file(int file)
{
	char	buffer[BUFF_SIZE + 1];

	while (read(file, buffer, BUFF_SIZE))
		ft_putstr(buffer);
}
