/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 17:42:22 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/19 10:18:42 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_assign_pointer(void (*method[5])(int, int))
{
	method[0] = ft_add;
	method[1] = ft_sub;
	method[2] = ft_mul;
	method[3] = ft_div;
	method[4] = ft_mod;
}

void	ft_check_op(int fvalue, char *operator, int lvalue)
{
	void (*method[5])(int fvalue, int lvalue);

	ft_assign_pointer(method);
	if (operator[0] == '+')
		(*method[0])(fvalue, lvalue);
	else if (operator[0] == '-')
		(*method[1])(fvalue, lvalue);
	else if (operator[0] == '*')
		(*method[2])(fvalue, lvalue);
	else if (operator[0] == '/')
		(*method[3])(fvalue, lvalue);
	else if (operator[0] == '%')
		(*method[4])(fvalue, lvalue);
	else
	{
		ft_putnbr(0);
		ft_putchar('\n');
	}
}

int		main(int argc, char **argv)
{
	if (argc == 4)
	{
		ft_check_op(ft_atoi(argv[1]), argv[2], ft_atoi(argv[3]));
	}
	return (0);
}
