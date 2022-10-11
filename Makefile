# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: gkoylu <gkoylu@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/11 14:55:24 by gkoylu        #+#    #+#                  #
#    Updated: 2022/10/11 14:55:28 by gkoylu        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

CC=gcc
CFLAGS=-Wall -Wextra -Werror

RM=rm -f

SRC=ft_*.c
OBJ=*.o

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c -I $(SRC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all	

.PHONY: clean fclean all re