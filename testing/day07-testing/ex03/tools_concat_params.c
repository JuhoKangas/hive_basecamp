/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_concat_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 16:39:41 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/04 17:23:06 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_concat_params(int argc, char **argv);
char	ft_putstr(char *str);

int main(int argc, char *argv[])
{


    if (argc == 1)
        return (0);

    ft_putstr(ft_concat_params(argc, argv));
    return 0;
}