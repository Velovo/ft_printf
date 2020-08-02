/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 13:12:26 by avan-pra          #+#    #+#             */
/*   Updated: 2019/10/09 13:12:27 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbrnext(int n)
{
	long nb;

	nb = (long)n;
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	if (nb < 10)
	{
		ft_putchar((nb + '0'));
	}
	if (nb >= 10)
	{
		ft_putnbrnext((nb / 10));
		ft_putnbrnext((nb % 10));
	}
}

void		ft_putnbr(int n)
{
	if (n != -2147483648)
		ft_putnbrnext(n);
	else
		write(1, "2147483648", 10);
}
