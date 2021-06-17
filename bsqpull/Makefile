# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jkangas <jkangas@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/16 17:05:49 by jkangas           #+#    #+#              #
#    Updated: 2021/06/16 20:15:54 by jkangas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC =	srcs/copygrid.c srcs/ft_create_list.c srcs/helperfunct.c srcs/main.c \
		srcs/print_grid.c
OBJ =	$(SRC:.c=.o)
NAME = bsq
CFLAGS = -Wall -Wextra -Werror
INCLUDES = includes/

all: $(NAME)

$(NAME):
	gcc -o bsq $(SRC) -I$(INCLUDES)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all