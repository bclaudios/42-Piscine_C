# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: scoron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/13 20:49:05 by scoron            #+#    #+#              #
#    Updated: 2018/09/16 20:03:35 by scoron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = colle-2

SRCS = main.c ft_read.c \
	   ft_check.c \
	   ft_print_result.c \
	   ft_str.c \
	   check_colle00.c \
	   check_colle01.c \
	   check_colle02.c \
	   check_colle03.c \
	   check_colle04.c \

OFILES = ft_read.o main.o \
		 ft_check.o \
		 ft_print_result.o \
		 ft_str.o \
		 check_colle00.o \
		 check_colle01.o \
		 check_colle02.o \
		 check_colle03.o \
		 check_colle04.o \

FLAGS = -Iincludes -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OFILES)
	cc $(FLAGS) $(OFILES) -o $(NAME)
	
clean :
	/bin/rm -f $(OFILES)

fclean : clean
	/bin/rm -f $(NAME)

re : fclean all

norm:
	norminette $(SRCS)

main.o : main.c
	cc -c $(FLAGS) main.c
ft_read.o : ft_read.c
	cc -c $(FLAGS) ft_read.c
ft_check.o : ft_check.c
	cc -c $(FLAGS) ft_check.c
ft_print_result.o : ft_print_result.c
	cc -c $(FLAGS) ft_print_result.c
ft_str.o : ft_str.c
	cc -c $(FLAGS) ft_str.c
ft_check_colle00.o : ft_check_colle00.c
	cc -c $(FLAGS) ft_check_colle00.c
ft_check_colle01.o : ft_check_colle01.c
	cc -c $(FLAGS) ft_check_colle01.c
ft_check_colle02.o : ft_check_colle02.c
	cc -c $(FLAGS) ft_check_colle02.c
ft_check_colle03.o : ft_check_colle03.c
	cc -c $(FLAGS) ft_check_colle03.c
ft_check_colle04.o : ft_check_colle04.c
	cc -c $(FLAGS) ft_check_colle04.c
