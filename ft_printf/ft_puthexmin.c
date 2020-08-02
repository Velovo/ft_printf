/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexmin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 12:02:54 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/06 12:02:56 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_puthexminnext(unsigned long addr)
{
	char *hexa;

	hexa = "0123456789abcdef";
	if (addr < 16)
	{
		write(1, &hexa[addr], 1);
	}
	if (addr >= 16)
	{
		ft_puthexminnext(addr / 16);
		ft_puthexminnext(addr % 16);
	}
}

void		ft_puthexmin(unsigned long nb)
{
	ft_puthexminnext(nb);
}
