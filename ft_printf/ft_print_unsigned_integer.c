/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_integer.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 16:11:22 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/08 16:11:24 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "ft_printflag.h"

void	ft_flag_unsigned_integer_nothing
	(t_tip arg, t_space espace, char c, t_flag *flags)
{
	while (espace.len_space > 0)
	{
		write(1, &c, 1);
		--espace.len_space;
		++flags->w_len;
	}
	while (espace.len_zero > 0)
	{
		write(1, "0", 1);
		--espace.len_zero;
		++flags->w_len;
	}
	ft_putnbruns(arg.i);
}

void	ft_flag_unsigned_integer_fchamp
	(t_tip arg, t_space espace, char c, t_flag *flags)
{
	while (espace.len_zero > 0)
	{
		write(1, "0", 1);
		--espace.len_zero;
		++flags->w_len;
	}
	ft_putnbruns(arg.i);
	while (espace.len_space > 0)
	{
		write(1, " ", 1);
		--espace.len_space;
		++flags->w_len;
	}
}

void	ft_flag_unsigned_integer(t_flag *flags, size_t len, t_tip arg)
{
	t_space espace;
	char	c;

	espace.len_zero = 0;
	espace.len_space = 0;
	flags->w_len = len;
	c = ((flags->f_rep_o == 1 && flags->f_preci == 0) ? '0' : ' ');
	if (flags->f_preci <= (int)len && arg.i != 0)
		flags->f_preci = len;
	if (flags->f_po_es == 0)
		espace.len_space = flags->f_nb_point - len;
	else
		espace.len_space = flags->f_nb_point - flags->f_preci;
	espace.len_zero = flags->f_preci - len;
	if (arg.k == 0 && flags->f_preci == 0 && flags->f_po_es == 1)
		ft_special_case(espace, c, flags);
	else if (flags->f_champ == 0)
		ft_flag_unsigned_integer_nothing(arg, espace, c, flags);
	else
		ft_flag_unsigned_integer_fchamp(arg, espace, c, flags);
}
