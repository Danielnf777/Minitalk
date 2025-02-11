NAME = libftprintf.a

SRCS = print_putchar.c ft_printf.c functions.c types.c corpus.c 

OBJS = $(SRCS:.c=.o)

CFLAGS = -Wall -Werror -Wextra

CC = gcc

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c ft_printf.h Makefile 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
