# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ayeap <ayeap@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/14 12:39:47 by ayeap             #+#    #+#              #
#    Updated: 2024/06/19 14:50:23 by ayeap            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Iinclude 
RM = rm -f

SRC_DIR = src
SRC_FILES = ft_print_char.c \
			ft_print_digit.c \
			ft_print_hex.c \
			ft_print_ptr.c \
			ft_print_str.c \
			ft_printf.c \
			ft_strlen.c

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))

OBJ_DIR = obj
OBJ = $(SRC:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

$(NAME): $(OBJ_DIR) $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

$(OBJ_DIR):
	@mkdir $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@$(RM) $(OBJ)
	@rm -rf $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all, clean, fclean, re