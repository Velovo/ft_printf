/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:18:12 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/08 12:18:13 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "ft_printflag.h"

void	ft_flag_pointer(t_flag *flags, size_t len, t_tip arg)
{
	int	len_space;

	len_space = 0;
	flags->w_len = flags->w_len + len;
	len_space = flags->f_nb_point - len;
	if (flags->f_champ == 0)
	{
		while (len_space > 0)
		{
			write(1, " ", 1);
			--len_space;
			++flags->w_len;
		}
		ft_putpoint(arg.ptr);
	}
	else
	{
		ft_putpoint(arg.ptr);
		while (len_space > 0)
		{
			write(1, " ", 1);
			--len_space;
			++flags->w_len;
		}
	}
}
