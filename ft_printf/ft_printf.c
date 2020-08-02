/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:44:33 by avan-pra          #+#    #+#             */
/*   Updated: 2019/10/30 18:44:35 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int		ft_printf(const char *format, ...)
{
	va_list	argptr;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(argptr, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			ft_putchar(format[i]);
			++i;
			++len;
		}
		else
		{
			len = len + ft_hub((char*)&format[i + 1], argptr);
			i = i + ft_godstrnstr((char*)&format[i + 1]);
		}
	}
	va_end(argptr);
	return (len);
}
