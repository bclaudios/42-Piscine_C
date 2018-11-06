/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 16:47:37 by bclaudio          #+#    #+#             */
/*   Updated: 2018/08/30 21:52:22 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int unbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	unbr = nb;
	if (unbr > 9)
	{
		ft_putnbr(unbr / 10);
		ft_putnbr(unbr % 10);
	}
	else
	{
		ft_putchar(unbr + '0');
	}
}
