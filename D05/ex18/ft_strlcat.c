/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 16:55:59 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/10 20:40:45 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int ordestlen;
	unsigned int srclen;

	ordestlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	if (size <= ordestlen)
		return (size + srclen);
	while (ordestlen + i + 1 < size)
	{
		dest[ft_strlen(dest)] = src[i];
		i++;
	}
	dest[ft_strlen(dest)] = '\0';
	return (ordestlen + srclen);
}
