/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:16:45 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/13 19:17:02 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcpy(char *dst, const char *src)
{
	size_t i;

	i = 0;
	while ((dst && src) && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (dst)
		dst[i] = '\0';
	return (ft_strlen((char*)src));
}
