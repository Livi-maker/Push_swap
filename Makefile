NAME = push_swap

MY_SOURCES = $(wildcard *.c)

MY_OBJECTS = $(MY_SOURCES:.c=.o)

CC = cc

CFLAGS = -Wall -Werror -Wextra

LIBOBJECTS = -Llibft -lft

all: $(NAME)

$(NAME): $(MY_OBJECTS) lib
	$(CC) $(MY_OBJECTS) $(LIBOBJECTS) -o $(NAME)

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

lib:
	make -C libft
	make bonus -C libft

clean:
	rm -f $(MY_OBJECTS)
	make clean -C libft

fclean:
	rm -f $(MY_OBJECTS) $(NAME)
	make fclean -C libft

re:
	fclean $(NAME)

