/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 10:20:30 by avan-pra          #+#    #+#             */
/*   Updated: 2019/10/08 10:20:32 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int				ft_atoi(const char *str);
void			ft_printpercent(va_list argptr);
void			ft_putchar(int c);
void			ft_puthexmin(unsigned long nb);
void			ft_puthexmaj(unsigned long nb);
void			ft_putnbr(int n);
void			ft_putnbruns(unsigned long n);
void			ft_putpoint(unsigned char *ptr);
void			ft_putstr(char *str);
int				ft_strlen(char *str);
size_t			ft_strcpy(char *dst, const char *src);

#endif
