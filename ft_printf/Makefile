# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: avan-pra <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 16:02:37 by avan-pra          #+#    #+#              #
#    Updated: 2019/10/10 13:39:50 by avan-pra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libftprintf.a

SRC				=	ft_atoi.c\
					ft_printpercent.c\
					ft_putchar.c\
					ft_puthexmaj.c\
					ft_puthexmin.c\
					ft_putnbr.c\
					ft_putnbruns.c\
					ft_putpoint.c\
					ft_putstr.c\
					ft_strlen.c\
					ft_strcpy.c\

SRC2			=	ft_hub_print.c\
					ft_len_write.c\
					ft_print_char.c\
					ft_print_hexadecimal_maj.c\
					ft_print_hexadecimal_min.c\
					ft_print_integer.c\
					ft_print_point.c\
					ft_print_string.c\
					ft_print_unsigned_integer.c\
					ft_printf_utils1.c\
					ft_printf.c\
					ft_flag_parse.c\

LIB			= ./libft/

ROAD_S			= $(addprefix $(LIB), $(SRC))

ROAD_S2			= $(SRC2)

ROAD_O			= $(OBJ)

ROAD_O2			= $(OBJ2)

ROAD_TEST		= $(OBJ))

FLAGS			= -Wall -Wextra -Werror

OBJ				= $(SRC:.c=.o)

OBJ2			= $(SRC2:.c=.o)

CC				= gcc

HEADER_DIR		= -I./libft/libft.h -I./ft_printf.h -I./ft_printflag.h

$(NAME) :		$(OBJ2) $(OBJ)
				ar rcs $(NAME) $(OBJ) $(OBJ2)

all :			$(NAME)

clean :
				rm -f $(ROAD_O) $(ROAD_O2)

fclean : clean
				rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re bonus
