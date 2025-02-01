# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ldei-sva <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/19 14:15:06 by ldei-sva          #+#    #+#              #
#    Updated: 2025/02/01 19:28:33 by ldei-sva         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

MY_SOURCES = $(wildcard *.c)

MY_OBJECTS = $(MY_SOURCES:.c=.o)

BONUS_SRC = $(wildcard checker/*.c)

BONUS_OBJ = $(BONUS_SRC:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

LIBOBJECTS = -Llibft -lft

INCLUDE = -Ilibft -I/usr/include

all: $(NAME)

my_checker: $(BONUS_OBJ) lib
	$(CC) $(BONUS_OBJ) $(LIBOBJECTS) -o my_checker

$(NAME): $(MY_OBJECTS) lib
	$(CC) $(MY_OBJECTS) $(LIBOBJECTS) -o $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDE)

lib:
	make -C libft
	make bonus -C libft

bonus: my_checker

clean:
	rm -f $(MY_OBJECTS)
	make clean -C libft
	rm -f $(BONUS_OBJ)

fclean:
	rm -f $(MY_OBJECTS) $(NAME)
	make fclean -C libft
	rm -f $(BONUS_OBJ)
	rm -f my_checker

re: fclean all
