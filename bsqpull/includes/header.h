/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acamaras <acamaras@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/15 15:03:45 by acamaras          #+#    #+#             */
/*   Updated: 2021/06/16 17:34:26 by acamaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H

# define HEADER_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef struct		s_list
{
	char			c;
	struct s_list	*next;
}					t_list;

typedef struct		s_grid
{
	int				width;
	int				length;
	char			fill;
	char			empty;
	char			obstacle;
}					t_grid;

char				*add(char **str);
void				ft_putchar(char c);
void				ft_putnbr(int nb);
void				ft_putstr(char *str);
char				*add(char **str);
char				*ft_read_stdin(char **argv);
char				*ft_copy_list(t_list *list, int len);
void				ft_list_push_back(t_list **begin_list, char c);
int					**copy_grid(int **grid, char *str, int width, int length);
int					get_length(char *str);
int					get_width(char *str);
void				print_grid(int **grid, int width, int length);

#endif
