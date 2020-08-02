# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 17:18:38 by avan-pra          #+#    #+#              #
#    Updated: 2020/02/10 17:18:42 by avan-pra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

extern _ft_strcpy
extern _ft_strlen
extern _malloc
global _ft_strdup

_ft_strdup:
	push rdi
	call _ft_strlen
	mov rdi, rax
	call _malloc
	pop rdi
	mov rsi, rdi
	mov rdi, rax
	call _ft_strcpy
	ret
