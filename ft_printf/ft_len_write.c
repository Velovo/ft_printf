/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_write.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 10:46:49 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/08 10:46:51 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

size_t			ft_write_len(t_tip arg, char c)
{
	size_t len;

	len = 0;
	if (c == 'c')
		return (1);
	else if (c == 'd' || c == 'i')
		return (ft_len_deci(arg.k));
	else if (c == 's')
		return (ft_strlen(arg.str));
	else if (c == 'p')
		return (ft_pointlen((long)&arg.ptr[0]));
	else if (c == 'u')
		return (ft_len_deci(arg.i));
	else if (c == 'x' || c == 'X')
		return (ft_pointlen((long)arg.i) - 2);
	return (len);
}

size_t			ft_pointlen(long addr)
{
	size_t len;

	len = 0;
	while (addr >= 16)
	{
		addr = addr / 16;
		++len;
	}
	return (len + 3);
}

size_t			ft_len_deci(long long nbr)
{
	size_t len;

	len = 0;
	if (nbr < 0)
		nbr = nbr * -1;
	while (nbr >= 10)
	{
		nbr = nbr / 10;
		++len;
	}
	return (++len);
}
