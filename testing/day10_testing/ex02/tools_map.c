/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:10:58 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/07 17:20:13 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int		*ft_map(int *tab, int length, int(*f)(int));

int        sum_one(int x)
{
    return (x + 1);
}

void    display_array(int *arr, int len)
{
    int    i;

    i = 0;
    while (i < len)
    {
        printf("%d\n", arr[i++]);
    }
}

int    main()
{
    int tmp[] = {1, 2, 3};
    int *res = ft_map(tmp, 3, sum_one);
    display_array(res, 3);
	return (0);
}
