#**************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/21 16:42:49 by aaslan            #+#    #+#              #
#    Updated: 2022/06/21 18:14:52 by aaslan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= libft.a
CC		:= gcc
CFLAGS	:= -Wall -Wextra -Werror
SRC		:= $(shell find . -type f ! -name "ft_lst*.c" -name "*.c")
OBJ		:= $(SRC:.c=.o)
B_SRC	:= $(wildcard ft_lst*.c)
B_OBJ	:= $(B_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus: $(B_OBJ)
	ar -rcs $(NAME) $(B_OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
