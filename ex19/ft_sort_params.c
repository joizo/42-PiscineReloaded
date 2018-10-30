/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 22:10:23 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/04/06 23:01:34 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		main(int arg_c, char **arg_v)
{
	int f;
	int i;

	f = 1;
	while (f)
	{
		f = 0;
		i = -1;
		while (++i < arg_c - 1)
		{
			if (ft_strcmp(arg_v[i], arg_v[i + 1]) > 0)
			{
				ft_swap(&arg_v[i], &arg_v[i + 1]);
				f = 1;
			}
		}
	}
	i = 0;
	while (++i < arg_c)
	{
		ft_putstr(arg_v[i]);
		ft_putchar('\n');
	}
	return (0);
}
