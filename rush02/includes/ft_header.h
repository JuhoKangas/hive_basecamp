/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raho <raho@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/13 15:18:19 by raho              #+#    #+#             */
/*   Updated: 2021/06/13 20:20:35 by raho             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>

void		ft_putchar(char c);

void		ft_putstr(char *str);

void		ft_putnbr(int nb);

int			ft_count(int width, int height);

void		ft_read_input(int width, int height, int ret, int index);

void		new_check(char *str, int width, int height);

#endif
