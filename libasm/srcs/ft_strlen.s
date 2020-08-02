# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strlen.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/27 13:30:48 by avan-pra          #+#    #+#              #
#    Updated: 2020/01/27 13:30:50 by avan-pra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_strlen

;rdi rsi rdx rcx r8 r9 parametre de la fonction

_ft_strlen:
	xor	rcx, rcx	;met rcx a 0, (xor src, dest)

_ft_strlen_next:
	cmp [rdi], byte 0	;compare mon pointeur sur rdi a 0
	jz _ft_strlen_end	;saut conditionnel si zf = 1

	inc	rcx				;incrementation rcx (compteur)
	inc rdi				;incrementation de mon pointeur su ma string
	jmp _ft_strlen_next	;goto classique

_ft_strlen_end:
	mov rax, rcx		;bouge rcx dans rax
	ret					;return
