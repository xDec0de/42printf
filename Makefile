# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: danimart <danimart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/15 17:21:01 by danimart          #+#    #+#              #
#    Updated: 2021/11/02 14:27:45 by danimart         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a
CC=gcc
CFLAGS=-Wall -Werror -Wextra
C_FILES=ft_printf.c write_num.c write_txt.c
O_FILES=$(C_FILES:.c=.o)

all: $(NAME)
$(NAME): $(O_FILES)
	ar rc $(NAME) $(O_FILES)
clean:
	rm -rf $(O_FILES) $(O_FILES_BONUS)
fclean: clean
	rm -rf $(NAME)
re: fclean $(NAME)
.PHONY: all clean fclean re