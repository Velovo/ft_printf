/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/13 13:51:19 by avan-pra          #+#    #+#             */
/*   Updated: 2020/02/13 13:51:20 by avan-pra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

# include <stdlib.h>
# include <unistd.h>

size_t			ft_strlen(const char *str);
char			*ft_strcpy(char *dst, const char *src);
int				ft_strcmp(const char *str1, const char *str2);
ssize_t			ft_write(int fd, const char *buf, size_t len);
ssize_t			ft_read(int fd, char *buf, size_t len);
char			*ft_strdup(const char *s1);

#endif
