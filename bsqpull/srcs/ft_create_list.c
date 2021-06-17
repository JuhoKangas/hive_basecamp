/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <acamaras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 13:57:33 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/16 18:00:56 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#define VAR char buf; char *str; int file; int flag; int meta_count;
#define VAR2 t_list	*list;int i;char *meta;
#define ASSIGN	meta=(char*)malloc(sizeof(char)*16);flag=0;i=0;
#define ASSIGN2	meta_count=0;list=NULL;str=NULL;buf='\0';

t_list	*ft_create_list(char c)
{
	t_list	*list;

	list = (t_list *)malloc(sizeof(*list));
	list->next = NULL;
	list->c = c;
	return (list);
}

void	ft_list_push_back(t_list **begin_list, char c)
{
	t_list	*node;

	node = *begin_list;
	if (!node)
	{
		*begin_list = ft_create_list(c);
		return ;
	}
	while (node->next)
		node = node->next;
	node->next = ft_create_list(c);
}

char	*ft_copy_list(t_list *list, int len)
{
	int		i;
	char	*str;

	i = 0;
	str = NULL;
	if (list)
	{
		str = (char *)malloc(sizeof(*str) * (len + 1));
		while (i < len)
		{
			str[i] = list->c;
			list = list->next;
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

char	*ft_read_stdin(char **argv)
{
	VAR;
	VAR2;
	ASSIGN;
	ASSIGN2;
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		ft_putstr("failed");
	while (read(file, &buf, 1) > 0)
	{
		if (flag == 0)
		{
			if (buf == '\n')
				flag = 1;
			else
				meta[meta_count++] = buf;
		}
		else
		{
			ft_list_push_back(&list, buf);
			i++;
		}
	}
	close(file);
	str = ft_copy_list(list, i);
	return (str);
}
