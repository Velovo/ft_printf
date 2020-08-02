/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexmaj.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:50:35 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/06 12:50:37 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_puthexmajnext(unsigned long addr)
{
	char *hexa;

	hexa = "0123456789ABCDEF";
	if (addr < 16)
	{
		write(1, &hexa[addr], 1);
	}
	if (addr >= 16)
	{
		ft_puthexmajnext(addr / 16);
		ft_puthexmajnext(addr % 16);
	}
}

void		ft_puthexmaj(unsigned long nb)
{
	ft_puthexmajnext(nb);
}
