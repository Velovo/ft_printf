# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/28 17:51:20 by avan-pra          #+#    #+#              #
#    Updated: 2020/01/28 17:51:21 by avan-pra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_strcpy

_ft_strcpy:
	push rdi
	push rsi

_ft_strcpy_next:
	mov r9b, [rsi]
	cmp r9b, byte 0
	jz _ft_strcpy_end
	mov [rdi], r9b
	inc rdi
	inc rsi
	jmp _ft_strcpy_next

_ft_strcpy_end:
	mov [rdi], byte 0
	pop rsi
	pop rdi
	mov rax, rdi
	ret
