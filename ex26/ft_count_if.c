/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/31 16:02:27 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/04/03 22:27:23 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int con;

	i = 0;
	con = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			con++;
		i++;
	}
	return (con);
}
