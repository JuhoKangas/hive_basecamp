# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 13:40:54 by jkangas           #+#    #+#              #
#    Updated: 2021/06/10 16:24:48 by jkangas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
HEADER = ft_lib.h
SOURCE = main.c ft_print_file.c ft_putstr.c ft_strcmp.c
OBJECTS = main.o ft_print_file.o ft_putstr.o ft_strcmp.o

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SOURCE) -I $(HEADER)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)