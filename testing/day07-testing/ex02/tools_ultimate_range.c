/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_ultimate_range.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 09:05:45 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/03 15:37:09 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
{
    int min = -5000;
    int max = 192837;
    int *range;
    int size;
 
    size = 0;

    size = ft_ultimate_range(&range, min, max);
    if(size == 0)
    {
        printf("Sorry, that's not big enough.\n");
    }
    else
    {
        printf("This is the size: %d \n",size);
 
    }
    free(range);
    return (0);
}
}
