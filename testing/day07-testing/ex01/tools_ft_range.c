/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_ft_range.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 09:05:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/04 17:13:47 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int min, int max);

int        main(void)
{
int        i;
int        *tab;

 tab = ft_range(-20, 5);
 i = 0;
 while (i < 25)
  {
     printf("%d\n", tab[i]);
       i++;
  }
}

