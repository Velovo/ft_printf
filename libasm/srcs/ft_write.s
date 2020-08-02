# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_write.s                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/10 16:16:31 by avan-pra          #+#    #+#              #
#    Updated: 2020/02/10 16:16:33 by avan-pra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

global _ft_write

_ft_write:
	mov r9, rdx
	mov rax, 0x02000004
	syscall
	cmp r9, rax
	jz _ft_write_ok
	mov rax, -1
	ret

_ft_write_ok:
	mov rax, r9
	ret
