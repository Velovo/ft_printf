/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpoint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:15:39 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/06 11:15:40 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putpointnext(long addr)
{
	char *hexa;

	hexa = "0123456789abcdef";
	if (addr < 16)
	{
		write(1, &hexa[addr], 1);
	}
	if (addr >= 16)
	{
		ft_putpointnext(addr / 16);
		ft_putpointnext(addr % 16);
	}
}

void		ft_putpoint(unsigned char *ptr)
{
	write(1, "0x", 2);
	ft_putpointnext((long)&ptr[0]);
}
