/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scoron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:52:30 by scoron            #+#    #+#             */
/*   Updated: 2018/09/16 19:42:04 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/list.h"

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strncat(char *dest, char *src, int nb, int amount_total)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	if (!(res = malloc(sizeof(char) * (amount_total + 1))))
		return (0);
	res = ft_strcpy(res, dest);
	while (res[i] != '\0')
		i++;
	while (src[j] != '\0' && j < nb)
	{
		res[i] = src[j];
		j++;
		i++;
	}
	res[i] = '\0';
	free(dest);
	return (res);
}

char	*ft_read(void)
{
	char	*str_colle;
	char	buf[BUF_SIZE];
	int		amount;
	int		amount_total;

	amount_total = 0;
	if (!(str_colle = malloc(sizeof(char))))
		return (NULL);
	str_colle[0] = '\0';
	while ((amount = read(0, buf, BUF_SIZE)) > 0)
	{
		amount_total += amount;
		str_colle = ft_strncat(str_colle, buf, BUF_SIZE, amount_total);
	}
	if (amount == -1 || str_colle[0] == '\0')
	{
		ft_putstr("aucune\n");
		return (NULL);
	}
	return (str_colle);
}
