/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:27:09 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/07 11:27:10 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"
#include "ft_printflag.h"

void	ft_print_hub(t_flag *flags, char c, size_t len, t_tip arg)
{
	if (c == 'c')
		ft_flag_char(flags, len, arg);
	else if (c == 's')
		ft_flag_string(flags, len, arg);
	else if (c == 'p')
		ft_flag_pointer(flags, len, arg);
	else if (c == 'd' || c == 'i')
		ft_flag_integer(flags, len, arg);
	else if (c == 'u')
		ft_flag_unsigned_integer(flags, len, arg);
	else if (c == 'x')
		ft_flag_hexadecimal_min(flags, len, arg);
	else if (c == 'X')
		ft_flag_hexadecimal_maj(flags, len, arg);
	else if (c == '%')
		ft_flag_char(flags, len, arg);
	else
		ft_flag_char(flags, len, arg);
}
