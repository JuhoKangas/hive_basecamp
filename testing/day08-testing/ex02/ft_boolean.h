/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/04 18:32:48 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/05 14:27:11 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define EVEN(x) (x % 2) == 0
# define EVEN_MSG "This has even number of arguments\n"
# define ODD_MSG "This has odd number of argument\n"
# define SUCCESS 0
# define ABSVAL "The absolute value is"

void	ft_putstr(char c);

typedef int t_bool;

#endif