/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 18:47:44 by avan-pra          #+#    #+#             */
/*   Updated: 2019/10/30 18:47:45 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct	s_flag
{
	int		f_champ;
	int		f_rep_o;
	int		f_po_es;
	int		f_et_es;
	int		f_nb_point;
	int		f_preci;
	size_t	w_len;
}				t_flag;

typedef struct	s_tipe
{
	int				k;
	char			*str;
	unsigned long	i;
	unsigned char	*ptr;
}				t_tip;

typedef struct	s_space
{
	int		len_space;
	int		len_zero;
}				t_space;

int				ft_printf(const char *format, ...);
int				ft_godstrnstr(char *haystack);
int				ft_hub(char *str, va_list argptr);
t_flag			*ft_flaginit(t_flag *flags);
t_flag			*ft_parse(char *str, t_flag *flags, va_list argptr);
void			ft_print_hub(t_flag *flags, char c, size_t len, t_tip arg);
void			ft_show(t_flag *flags, char c, va_list argptr);
size_t			ft_write_len(t_tip arg, char c);
size_t			ft_pointlen(long addr);
size_t			ft_len_deci(long long nbr);
void			ft_special_case(t_space espace, char c, t_flag *flags);

#endif
