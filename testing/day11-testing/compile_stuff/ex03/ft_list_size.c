/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 17:07:12 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/09 17:59:47 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	t_list *tmp;
	int count;

	tmp = begin_list;
	count = 0;
	if (tmp)
	{
		count = 1;
		while (tmp->next)
		{
			count++;
			tmp = tmp->next;
		}
		
	}
	return (count);
}
