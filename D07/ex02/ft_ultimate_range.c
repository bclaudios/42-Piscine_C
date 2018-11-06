/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bclaudio <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 14:20:54 by bclaudio          #+#    #+#             */
/*   Updated: 2018/09/12 19:38:09 by bclaudio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *subrange;
	int i;

	i = 0;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	subrange = (int*)malloc(sizeof(int) * (max - min));
	if (subrange == NULL)
		return (0);
	while (min < max)
	{
		subrange[i] = min;
		min++;
		i++;
	}
	range[0] = subrange;
	return (i);
}
