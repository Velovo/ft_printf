# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcmp.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 16:15:52 by avan-pra          #+#    #+#              #
#    Updated: 2020/02/10 16:15:53 by avan-pra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_strcmp

_ft_strcmp:
	mov r8b, [rdi]
	mov r9b, [rsi]
	cmp r8b, r9b
	jg _ft_strcmp_unsigned
	jl _ft_strcmp_signed
	cmp [rdi], byte 0
	jz _ft_strcmp_zero

_ft_strcmp_next:
	inc rsi
	inc rdi
	jmp _ft_strcmp


_ft_strcmp_zero:
	cmp [rsi], byte 0
	jz _ft_strcmp_equal
	jmp _ft_strcmp_next

_ft_strcmp_signed:
	mov rax, -1
	ret

_ft_strcmp_unsigned:
	mov rax, 1
	ret

_ft_strcmp_equal:
	mov rax, 0
	ret
