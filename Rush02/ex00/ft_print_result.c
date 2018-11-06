/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_result.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olmartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 19:01:32 by olmartin          #+#    #+#             */
/*   Updated: 2018/09/16 19:41:59 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/list.h"

int		howmcolle(char *str, int len, int y, int x)
{
	return (check_colle00(str, len, y, x)
			+ check_colle01(str, len, y, x)
			+ check_colle02(str, len, y, x)
			+ check_colle03(str, len, y, x)
			+ check_colle04(str, len, y, x));
}

void	ft_print_result(char *name, int y, int x, int i)
{
	ft_putchar('[');
	ft_putstr(name);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putchar(']');
	if (i-- > 1)
		ft_putstr(" || ");
}

void	ft_print(char *str, int y, int x)
{
	int	i;
	int len;

	len = ft_strlen(str);
	i = howmcolle(str, len, y, x);
	if (i == 0)
		ft_putstr("aucune");
	if (check_colle00(str, len, y, x))
		ft_print_result("colle-00", x, y, i--);
	if (check_colle01(str, len, y, x))
		ft_print_result("colle-01", x, y, i--);
	if (check_colle02(str, len, y, x))
		ft_print_result("colle-02", x, y, i--);
	if (check_colle03(str, len, y, x))
		ft_print_result("colle-03", x, y, i--);
	if (check_colle04(str, len, y, x))
		ft_print_result("colle-04", x, y, i);
	ft_putchar('\n');
}
