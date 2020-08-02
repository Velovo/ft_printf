/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:57:27 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/08 10:57:28 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "ft_printflag.h"

void	ft_flag_string_nothing(t_tip arg, int len_space, int len, t_flag *flags)
{
	while (len_space > 0)
	{
		write(1, " ", 1);
		--len_space;
		++flags->w_len;
	}
	if (flags->f_po_es == 0 || flags->f_preci >= ft_strlen(arg.str))
	{
		write(1, arg.str, len);
		flags->w_len = flags->w_len + len;
	}
	else if (flags->f_preci < ft_strlen(arg.str) && flags->f_po_es == 1)
	{
		write(1, arg.str, flags->f_preci);
		flags->w_len = flags->w_len + flags->f_preci;
	}
}

void	ft_flag_string_fchamp(t_tip arg, int len_space, int len, t_flag *flags)
{
	if (flags->f_po_es == 0 || flags->f_preci >= ft_strlen(arg.str))
	{
		write(1, arg.str, len);
		flags->w_len = flags->w_len + len;
	}
	else if (flags->f_preci < ft_strlen(arg.str) && flags->f_po_es == 1)
	{
		write(1, arg.str, flags->f_preci);
		flags->w_len = flags->w_len + flags->f_preci;
	}
	while (len_space > 0)
	{
		write(1, " ", 1);
		--len_space;
		++flags->w_len;
	}
}

void	ft_flag_string(t_flag *flags, size_t len, t_tip arg)
{
	int len_space;

	if (flags->f_preci > (int)len)
		flags->f_preci = len;
	if (flags->f_po_es == 0)
		len_space = flags->f_nb_point - len;
	else
		len_space = flags->f_nb_point - flags->f_preci;
	if (!arg.str)
		arg.str = "(null)";
	if (flags->f_champ == 0)
		ft_flag_string_nothing(arg, len_space, len, flags);
	else
		ft_flag_string_fchamp(arg, len_space, len, flags);
}
