/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_list_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:57:05 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/09 17:58:11 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

int	ft_list_size(t_list *begin_list);

int main()
{
    t_list *p, *s, *j, *t, *u;

    p = ft_create_elem("One");
    s = ft_create_elem("Two");
    j = ft_create_elem("Three");
    t = ft_create_elem("Four");
    u = ft_create_elem("Five");
    p->next = s;
    s->next = j;
    j->next = t;
    t->next = u;
    printf("%d\n", ft_list_size(p));
    return 0;
}
