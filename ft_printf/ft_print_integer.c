/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_integer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 12:30:17 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/08 12:30:18 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "ft_printflag.h"

int		ft_flag_integer_rep_o_next
	(t_tip arg, t_space espace, char c, t_flag *flags)
{
	while (espace.len_space > 0)
	{
		write(1, &c, 1);
		--espace.len_space;
		++flags->w_len;
	}
	if (arg.k < 0)
	{
		arg.k = arg.k * -1;
		write(1, "-", 1);
		++flags->w_len;
	}
	return (arg.k);
}

void	ft_flag_integer_rep_o(t_tip arg, t_space espace, char c, t_flag *flags)
{
	if (c == '0')
	{
		if (arg.k < 0)
		{
			arg.k = arg.k * -1;
			write(1, "-", 1);
			++flags->w_len;
		}
		while (espace.len_space > 0)
		{
			write(1, &c, 1);
			--espace.len_space;
			++flags->w_len;
		}
	}
	else
		arg.k = ft_flag_integer_rep_o_next(arg, espace, c, flags);
	while (espace.len_zero > 0)
	{
		write(1, "0", 1);
		--espace.len_zero;
		++flags->w_len;
	}
	ft_putnbr(arg.k);
}

void	ft_flag_integer_nothing
	(t_tip arg, t_space espace, char c, t_flag *flags)
{
	while (espace.len_space > 0)
	{
		write(1, &c, 1);
		--espace.len_space;
		++flags->w_len;
	}
	if (arg.k < 0)
	{
		arg.k = arg.k * -1;
		write(1, "-", 1);
		++flags->w_len;
	}
	while (espace.len_zero > 0)
	{
		write(1, "0", 1);
		--espace.len_zero;
		++flags->w_len;
	}
	ft_putnbr(arg.k);
}

void	ft_flag_integer_fchamp(t_tip arg, t_space espace, char c, t_flag *flags)
{
	(void)c;
	if (arg.k < 0)
	{
		arg.k = arg.k * -1;
		write(1, "-", 1);
		++flags->w_len;
	}
	while (espace.len_zero > 0)
	{
		write(1, "0", 1);
		--espace.len_zero;
		++flags->w_len;
	}
	ft_putnbr(arg.k);
	while (espace.len_space > 0)
	{
		write(1, " ", 1);
		--espace.len_space;
		++flags->w_len;
	}
}

void	ft_flag_integer(t_flag *flags, size_t len, t_tip arg)
{
	t_space espace;
	char	c;

	espace.len_zero = 0;
	espace.len_space = 0;
	flags->w_len = len;
	c = ((flags->f_rep_o == 1 && flags->f_preci == 0) ? '0' : ' ');
	if (flags->f_preci <= (int)len && arg.k != 0)
		flags->f_preci = len;
	espace.len_space = (flags->f_po_es == 0) ?
	flags->f_nb_point - len : flags->f_nb_point - flags->f_preci;
	(arg.k < 0) ? --espace.len_space : espace.len_space;
	espace.len_zero = flags->f_preci - len;
	if (arg.k == 0 && flags->f_preci == 0 && flags->f_po_es == 1)
		ft_special_case(espace, c, flags);
	else if (flags->f_champ == 0)
	{
		if (flags->f_rep_o == 1)
			ft_flag_integer_rep_o(arg, espace, c, flags);
		else
			ft_flag_integer_nothing(arg, espace, c, flags);
	}
	else
		ft_flag_integer_fchamp(arg, espace, c, flags);
}
