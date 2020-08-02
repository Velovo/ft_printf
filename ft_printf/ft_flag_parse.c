/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flag_parse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:08:03 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/12 15:08:04 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int			ft_parse_next(char *str, t_flag *flags, va_list argptr, int i)
{
	if (str[i] == '.')
	{
		flags->f_po_es = 1;
		if (str[i + 1] == '*')
			flags->f_preci = va_arg(argptr, int);
		else
		{
			flags->f_preci = ft_atoi(&str[i + 1]);
			while (str[i + 1] >= '0' && str[i + 1] <= '9')
				++i;
			--i;
		}
		++i;
	}
	else if (str[i] == '*')
	{
		flags->f_et_es = 1;
		flags->f_nb_point = va_arg(argptr, int);
	}
	return (i);
}

t_flag		*ft_parse(char *str, t_flag *flags, va_list argptr)
{
	int	i;
	int	len;

	len = ft_godstrnstr(str) - 2;
	i = 0;
	while (i < len)
	{
		if (str[i] == '-')
			flags->f_champ = 1;
		else if (str[i] == '0' && i == 0)
			flags->f_rep_o = 1;
		else if (str[i] >= '0' && str[i] <= '9')
		{
			flags->f_nb_point = atoi(&str[i]);
			while (str[i + 1] >= '0' && str[i + 1] <= '9')
				++i;
		}
		else
			i = ft_parse_next(str, flags, argptr, i);
		i++;
	}
	return (flags);
}
