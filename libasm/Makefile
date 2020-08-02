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

NAME			= libasm.a

SRC				=	ft_read.s\
					ft_strcmp.s\
					ft_strcpy.s\
					ft_strdup.s\
					ft_strlen.s\
					ft_write.s\

SRCD			= ./srcs/

ROAD_S			= $(addprefix $(SRCD), $(SRC))

ROAD_O			= $(OBJ)

%.o: %.s
				nasm -f macho64 $^ $(HEADER_DIR)

OBJ				= $(ROAD_S:.s=.o)

CC				= gcc

HEADER_DIR		= -I./head/libasm.h

$(NAME) :		$(OBJ)
				ar rcs $(NAME) $(OBJ)

all :			$(NAME)

clean :
				rm -f $(ROAD_O)

fclean : clean
				rm -f $(NAME)

re : fclean all

.PHONY: all clean fclean re
