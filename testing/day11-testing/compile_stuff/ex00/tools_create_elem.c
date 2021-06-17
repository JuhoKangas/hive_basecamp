/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_create_elem.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 20:25:47 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/09 17:41:39 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data);

int     main()
{
    int n = 42;
    void *data;
    t_list *element;

    data = &n;
    element = ft_create_elem(data);
    printf("the number turned into a void pointer: %i\n", *((int*)data));
    printf("the number we put into the list: %i \n", *((int*)element->data));
    return 0;
}