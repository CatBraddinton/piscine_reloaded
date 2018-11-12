/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdudko <kdudko@student.unit.ua>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 18:48:15 by kdudko            #+#    #+#             */
/*   Updated: 2018/11/12 14:10:42 by kdudko           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *res;
	int len;
	int i;

	i = 0;
	if (min < max)
	{
		len = max - min;
		res = (int*)malloc(len + 1);
		while (min < max)
		{
			res[i] = min;
			min++;
			i++;
		}
		res[i] = '\0';
	}
	else
		return (0);
	return (res);
}
