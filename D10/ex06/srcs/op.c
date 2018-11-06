/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 20:32:05 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/19 10:18:19 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_add(int fvalue, int lvalue)
{
	ft_putnbr(fvalue + lvalue);
	ft_putchar('\n');
}

void	ft_sub(int fvalue, int lvalue)
{
	ft_putnbr(fvalue - lvalue);
	ft_putchar('\n');
}

void	ft_mul(int fvalue, int lvalue)
{
	ft_putnbr(fvalue * lvalue);
	ft_putchar('\n');
}

void	ft_div(int fvalue, int lvalue)
{
	if (lvalue == 0)
		ft_putstr("Stop : division by zero\n");
	else
	{
		ft_putnbr(fvalue / lvalue);
		ft_putchar('\n');
	}
}

void	ft_mod(int fvalue, int lvalue)
{
	if (lvalue == 0)
		ft_putstr("Stop : modulo by zero\n");
	else
	{
		ft_putnbr(fvalue % lvalue);
		ft_putchar('\n');
	}
}
