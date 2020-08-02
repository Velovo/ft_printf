/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 11:26:55 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/07 11:26:57 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf.h"

int			ft_godstrnstr(char *haystack)
{
	int		i;
	int		j;
	char	*needle;

	needle = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ%\0";
	i = 0;
	j = 0;
	while (haystack[i] != '\0')
	{
		while (needle[j] != '\0')
		{
			if (needle[j] == haystack[i])
				return (i + 2);
			j++;
		}
		j = 0;
		i = i + 1;
	}
	return (0);
}

int			ft_hub(char *str, va_list argptr)
{
	t_flag	*flags;
	int		convr;
	int		len;

	convr = ft_godstrnstr(str) - 2;
	flags = NULL;
	if (!(flags = ft_flaginit(flags)))
		return (0);
	flags = ft_parse(str, flags, argptr);
	flags->f_rep_o = (((flags->f_preci >= 0 && flags->f_po_es == 1)
	|| flags->f_champ == 1) && str[convr] != '%') ? 0 : flags->f_rep_o;
	if (flags->f_nb_point < 0)
	{
		flags->f_champ = 1;
		flags->f_nb_point = flags->f_nb_point * -1;
	}
	if (flags->f_preci < 0)
	{
		flags->f_preci = 0;
		flags->f_po_es = 0;
	}
	ft_show(flags, str[convr], argptr);
	len = flags->w_len;
	free(flags);
	return (len);
}

t_flag		*ft_flaginit(t_flag *flags)
{
	if (!(flags = malloc(1 * sizeof(t_flag))))
		return (NULL);
	flags->f_champ = 0;
	flags->f_rep_o = 0;
	flags->f_po_es = 0;
	flags->f_et_es = 0;
	flags->f_nb_point = 0;
	flags->f_preci = 0;
	flags->w_len = 0;
	return (flags);
}

void		ft_show(t_flag *flags, char c, va_list argptr)
{
	t_tip	arg;
	size_t	len;

	(void)flags;
	arg.k = 0;
	arg.str = NULL;
	arg.i = 0;
	arg.ptr = NULL;
	if (c == 'c' || c == 'd' || c == 'i')
		arg.k = va_arg(argptr, int);
	else if (c == 's')
		arg.str = va_arg(argptr, char*);
	else if (c == 'p')
		arg.ptr = va_arg(argptr, unsigned char*);
	else if (c == 'u' || c == 'x' || c == 'X')
		arg.i = va_arg(argptr, unsigned int);
	else if (c == '%')
		arg.k = '%';
	else
		arg.k = c;
	len = ft_write_len(arg, c);
	ft_print_hub(flags, c, len, arg);
}

void		ft_special_case(t_space espace, char c, t_flag *flags)
{
	while (espace.len_space > 0)
	{
		write(1, &c, 1);
		--espace.len_space;
		++flags->w_len;
	}
	--flags->w_len;
}
