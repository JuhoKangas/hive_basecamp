/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 14:08:35 by jkangas           #+#    #+#             */
/*   Updated: 2021/06/10 16:44:11 by jkangas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"
#include <fcntl.h>
#include <unistd.h>

#define DIR {ft_putstr_err(argv[1]); ft_putstr(" Is a directory.\n"); return ;}
#define NONE {ft_putstr_err("No such file or directory found.\n"); return ;}

void	ft_display_file(int argc, char **argv)
{
	int file;

	if (argc == 2)
	{
		if (ft_strcmp(argv[1], ".") == 0 || ft_strcmp(argv[1], "/") == 0
			|| ft_strcmp(argv[1], "..") == 0 || ft_strcmp(argv[1], "./") == 0
			|| ft_strcmp(argv[1], "../") == 0)
			DIR;
		file = open(argv[1], O_RDONLY);
		if (file == -1)
			NONE;
		ft_print_file(file);
		close(file);
	}
	if (argc > 2)
		ft_putstr_err("Too many arguments.\n");
	if (argc < 2)
		ft_putstr_err("File name missing.\n");
}

int		main(int argc, char **argv)
{
	ft_display_file(argc, argv);
	return (0);
}
