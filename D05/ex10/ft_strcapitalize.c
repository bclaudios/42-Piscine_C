/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 14:05:11 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/05 14:42:42 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;
	int thres;

	i = 0;
	thres = 'a' - 'A';
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + thres;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int thres;

	i = 0;
	thres = 'a' - 'A';
	ft_strlowcase(str);
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			if (i == 0 || str[i - 1] == ' ' ||
			str[i - 1] == '+' || str[i - 1] == '-')
				str[i] -= thres;
		}
		i++;
	}
	return (str);
}
