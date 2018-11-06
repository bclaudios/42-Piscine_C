/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 20:08:51 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/10 20:39:07 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int findlen;

	i = 0;
	j = 0;
	findlen = ft_strlen(to_find);
	if (findlen < 1)
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			j++;
			if (j == findlen)
				return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
