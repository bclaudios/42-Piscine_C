/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 17:07:34 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/02 16:03:07 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int i;
	int charcount;

	i = 0;
	charcount = 0;
	while (str[i] != '\0')
	{
		charcount++;
		i++;
	}
	return (charcount);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		o;
	char	t;

	i = 0;
	o = ft_strlen(str) - 1;
	while (i <= o)
	{
		t = str[i];
		str[i] = str[o];
		str[o] = t;
		i++;
		o--;
	}
	return (str);
}
