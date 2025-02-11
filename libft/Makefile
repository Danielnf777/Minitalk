NAME = libft.a

SRCS = ft_atoi.c ft_isascii.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c ft_bzero.c ft_isdigit.c ft_memmove.c ft_strchr.c ft_strmapi.c ft_toupper.c ft_calloc.c ft_memset.c ft_strdup.c ft_strncmp.c ft_isalnum.c ft_isprint.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c ft_isalpha.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c get_next_line.c   

SRCS_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

OBJS = $(SRCS:.c=.o)

OBJS_BONUS = $(SRCS_BONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra #-fsanitize=address


#PRINTF_DIR = /home/danavarr/Documents/Printf

PRINTF_DIR = ./Printf

PRINTF = $(PRINTF_DIR)/libftprintf.a

CC = cc

all: $(NAME)


$(NAME): $(OBJS)
	$(MAKE) -C $(PRINTF_DIR)
	ar rc  $(NAME) $(OBJS) $(PRINTF_DIR)/*.o
#	ar rc  $(NAME) $(OBJS) $(PRINTF)

%.o: %.c libft.h Makefile $(PRINTF) 
	$(CC) $(CFLAGS) -c $< -o $@ 

bonus: $(OBJS) $(OBJS_BONUS)
	ar rc $(NAME) $(OBJS) $(OBJS_BONUS)

clean:
	rm -f $(OBJS) $(OBJS_BONUS)
	$(MAKE) clean -C $(PRINTF_DIR) 
fclean: clean
	rm -f $(NAME) $(PRINTF)

re: fclean all
