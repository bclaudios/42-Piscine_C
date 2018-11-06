/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 13:54:16 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/19 14:28:30 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_retcmp(int value)
{
	if (value > 0)
		return (1);
	if (value < 0)
		return (-1);
	return (0);
}

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 2)
	{
		if (ft_retcmp((*f)(tab[i], tab[i + 1]))
			!= ft_retcmp((*f)(tab[i + 1], tab[i + 2])))
			return (0);
		i++;
	}
	return (1);
}
