/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:49:49 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/08 10:49:50 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "ft_printflag.h"

void	ft_flag_char(t_flag *flags, size_t len, t_tip arg)
{
	flags->w_len = 1;
	len = flags->f_rep_o == 1 ? '0' : ' ';
	if (flags->f_champ == 0)
	{
		while (flags->f_nb_point > 1)
		{
			write(1, &len, 1);
			--flags->f_nb_point;
			++flags->w_len;
		}
		write(1, &arg.k, 1);
	}
	else
	{
		write(1, &arg.k, 1);
		while (flags->f_nb_point > 1)
		{
			write(1, &len, 1);
			--flags->f_nb_point;
			++flags->w_len;
		}
	}
}
