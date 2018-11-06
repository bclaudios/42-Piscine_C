/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 19:28:57 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/18 19:29:07 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void	ft_add(int fvalue, int lvalue);
void	ft_sub(int fvalue, int lvalue);
void	ft_mul(int fvalue, int lvalue);
void	ft_div(int fvalue, int lvalue);
void	ft_mod(int fvalue, int lvalue);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);

#endif
