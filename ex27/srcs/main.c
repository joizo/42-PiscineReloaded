/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 20:51:51 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/04/04 20:51:56 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int		main(int arg_c, char **arg_v)
{
	int		len;
	int		mr_bin;
	char	ft_buf[BUFF + 1];

	if (arg_c != 2)
	{
		if (arg_c == 1)
			ft_putstr("File name missing.\n");
		else
			ft_putstr("Too many arguments.\n");
		return (1);
	}
	mr_bin = open(arg_v[1], O_RDONLY);
	if (mr_bin == -1)
		return (1);
	while ((len = read(mr_bin, ft_buf, BUFF)))
	{
		ft_buf[len] = '\0';
		ft_putstr(ft_buf);
	}
	if (close(mr_bin) == -1)
		return (1);
	return (0);
}
