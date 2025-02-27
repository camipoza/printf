# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/16 16:52:23 by cpoza-ra          #+#    #+#              #
#    Updated: 2025/02/21 12:45:23 by cpoza-ra         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = cc 
C_FLAGS = -Wall -Wextra -Werror
INCLUDE = -I. #directorio de cabeceras (dir actual)
SRC_FILES = ft_printf.c ft_percent.c ft_putchar.c ft_putstr.c ft_putptr.c ft_putnbr.c ft_puthex.c ft_putunsign.c
OBJ_FILES = $(SRC_FILES:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJ_FILES) # para evitar relink, solo hace cambios en la lib si algun archivo .o ha cambiado
	ar rcs $(NAME) $(OBJ_FILES)

%.o: %.c #regla para compilar archivos .c en .o
	$(CC) $(C_FLAGS) $(INCLUDE) -c $< -o $@
clean: #regla para limpiar archivos .o
	rm -f $(OBJ_FILES)
fclean: #regla para limpiar todo incluyendo la lib
	rm -f $(NAME) $(OBJ_FILES)

re: fclean all #recompilar desde 0

.PHONY: all clean fclean re