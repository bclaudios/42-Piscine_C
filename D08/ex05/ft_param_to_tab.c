/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 09:20:52 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/17 12:20:55 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char				*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char				*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	while (src[i])
		i++;
	if (!(dest = (char*)malloc(i + 1 * sizeof(char))))
		return (0);
	return (ft_strcpy(dest, src));
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par *s_array;
	int			i;

	i = 0;
	s_array = (t_stock_par*)malloc(sizeof(t_stock_par) * (ac + 1));
	while (i < ac)
	{
		s_array[i].size_param = ft_strlen(av[i]);
		s_array[i].str = av[i];
		s_array[i].copy = ft_strdup(av[i]);
		s_array[i].tab = ft_split_whitespaces(av[i]);
		i++;
	}
	s_array[ac].str = 0;
	return (s_array);
}
