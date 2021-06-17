# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: raho <raho@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 16:33:14 by raho              #+#    #+#              #
#    Updated: 2021/06/13 20:02:11 by raho             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush-2
SRCS = srcs/
INCL = includes
FNCS = $(SRCS)main.c $(SRCS)ft_putchar.c $(SRCS)ft_putstr.c \
		$(SRCS)ft_read_input.c $(SRCS)ft_putnbr.c $(SRCS)new_check.c
CFLG = gcc -Wall -Wextra -Werror -o $(NAME) $(FNCS) -I$(INCL)

all: $(NAME)

$(NAME):
	$(CFLG)

clean:
	

fclean: clean
	rm -f $(NAME)
