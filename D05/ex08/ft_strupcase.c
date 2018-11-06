/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 12:53:38 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/05 13:43:12 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int i;
	int thres;

	i = 0;
	thres = 'a' - 'A';
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= thres;
		i++;
	}
	return (str);
}