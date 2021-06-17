/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_list_push_back.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:42:36 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/09 17:56:35 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

int        main(void)
{
    t_list    elem1, elem2, elem3, *begin;

    begin = &elem1;
    elem1.next = &elem2;
    elem2.next = &elem3;
    elem3.next = 0;

    elem1.data = "a";
    elem2.data = "b";
    elem3.data = "c";

    ft_list_push_front(&begin, "d");
    while (begin)
    {
        printf("%s\n", begin->data);
        begin = begin->next;
    }
}