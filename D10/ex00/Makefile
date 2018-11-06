# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/18 10:08:50 by bclaudio          #+#    #+#              #
#    Updated: 2018/09/19 09:50:41 by bclaudio         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_strcmp.c \
	   srcs/ft_strlen.c \
	   srcs/ft_swap.c \

OFILES = ft_putchar.o \
		 ft_putstr.o \
		 ft_strcmp.o \
		 ft_strlen.o \
		 ft_swap.o \

IDIR = includes

FLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME):
	gcc -c $(FLAGS) -I$(IDIR) $(SRCS)
	ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

clean :
	/bin/rm -f $(OFILES)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all
