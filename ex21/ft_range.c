/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 16:01:26 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/04/07 17:27:08 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int len;
	int *mas;

	i = 0;
	len = max - min;
	if (min > max || min == max)
		return (NULL);
	mas = (int *)malloc(sizeof(int) * len);
	while (min < max)
	{
		mas[i] = min;
		i++;
		min++;
	}
	return (mas);
}
