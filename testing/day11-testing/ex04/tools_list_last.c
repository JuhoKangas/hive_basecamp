/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_list_last.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 18:13:17 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/09 18:13:54 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list);

int main()
{
    t_list *p, *s, *j, *t, *u, *last;

    p = ft_create_elem("One");
    s = ft_create_elem("Two");
    j = ft_create_elem("Three");
    t = ft_create_elem("Four");
    u = ft_create_elem("Five");
    p->next = s;
    s->next = j;
    j->next = t;
    t->next = u;
    last = ft_list_last(p);
    
    printf("%s\n", last->data);
    return 0;
} 