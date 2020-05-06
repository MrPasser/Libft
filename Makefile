# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: svet <svet@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/04 15:46:13 by skrasin           #+#    #+#              #
#    Updated: 2020/05/06 11:51:45 by svet             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL := /bin/sh

objdir := ./objs/
srcdir := ./srcs/
incdir := ./includes/
srcdirs := char mem str
objects := $(patsubst %.c, %.o, $(foreach dir, $(addprefix $(srcdir), $(srcdirs)), $(wildcard $(dir)/*.c)))
NAME := libft.a
CFLAGS := -Wall -Wextra -Werror
CPPFLAGS := -I$(incdir)
ARFLAGS := $(ARFLAGS)s

all: $(NAME)

$(NAME) : $(NAME)($(objects))

.PHONY: all clean fclean re

clean:
	-$(RM) $(objects)

fclean: clean
	-$(RM) $(NAME)

re: fclean all
