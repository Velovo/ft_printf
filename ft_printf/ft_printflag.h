/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printflag.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 15:45:57 by avan-pra          #+#    #+#             */
/*   Updated: 2019/11/07 15:45:58 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTFLAG_H
# define FT_PRINTFLAG_H

# include "libft.h"
# include "ft_printf.h"

void	ft_flag_char(t_flag *flags, size_t len, t_tip arg);
void	ft_flag_string(t_flag *flags, size_t len, t_tip arg);
void	ft_flag_pointer(t_flag *flags, size_t len, t_tip arg);
void	ft_flag_integer(t_flag *flags, size_t len, t_tip arg);
void	ft_flag_unsigned_integer(t_flag *flags, size_t len, t_tip arg);
void	ft_flag_hexadecimal_maj(t_flag *flags, size_t len, t_tip arg);
void	ft_flag_hexadecimal_min(t_flag *flags, size_t len, t_tip arg);

#endif
