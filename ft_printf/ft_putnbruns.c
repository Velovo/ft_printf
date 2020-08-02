/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbruns.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 11:43:11 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/06 11:43:13 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbrunsnext(unsigned long nb)
{
	if (nb < 10)
	{
		ft_putchar((nb + '0'));
	}
	if (nb >= 10)
	{
		ft_putnbrunsnext((nb / 10));
		ft_putnbrunsnext((nb % 10));
	}
}

void		ft_putnbruns(unsigned long n)
{
	ft_putnbrunsnext(n);
}
