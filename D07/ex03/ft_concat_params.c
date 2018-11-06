/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 18:31:40 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/15 13:23:46 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_arcat(int argc, char **argv, char *dest)
{
	int i;
	int j;
	int k;

	i = 1;
	k = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			dest[k] = argv[i][j];
			j++;
			k++;
		}
		if (i < argc - 1)
			dest[k] = '\n';
		else
			dest[k] = '\0';
		k++;
		i++;
	}
	return (0);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		charcount;
	int		i;
	char	*str;

	i = 1;
	charcount = 0;
	while (argv[i])
		charcount += ft_strlen(argv[i++]) + 1;
	if (!(str = malloc(sizeof(int) * charcount)))
		return (0);
	ft_arcat(argc, argv, str);
	return (str);
}
