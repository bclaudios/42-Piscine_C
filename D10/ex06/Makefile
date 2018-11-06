# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 18:02:05 by bclaudio          #+#    #+#              #
#    Updated: 2018/09/18 20:32:27 by bclaudio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

SRCS = srcs/main.c \
	   srcs/op.c \
	   srcs/ft_atoi.c \
	   srcs/ft_putnbr.c \
	   srcs/ft_putchar.c \
	   srcs/ft_putstr.c

OFILES = main.o \
		 op.o \
		 ft_atoi.o \
		 ft_putnbr.o \
		 ft_putchar.o \
		 ft_putstr.o \

IDIR = includes

FLAGS = -Werror -Wextra -Wall

all : $(NAME)

$(NAME) : 
	gcc -c $(FLAGS) $(SRCS) -I$(IDIR)
	gcc $(FLAGS) $(OFILES) -o $(NAME)

clean : 
	/bin/rm -f $(OFILES)
