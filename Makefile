FLAGS = -Wall -Wextra -Werror -I. -I./libft/Printf

ACLIENT = client.c
ASERVER = server.c
ASRC = $(ASERVER) $(ACLIENT)

FSRC = src/
SSRC = $(addprefix $(FSRC),$(ASERVER))
CSRC = $(addprefix $(FSRC),$(ACLIENT))

SOBJ = $(SSRC:.c=.o)
COBJ = $(CSRC:.c=.o)

DEP = $(addprefix $(FSRC),$(ASRC:.c=.d))

SERVER = server
CLIENT = client

LIBFT = libft/libft.a
# PRINTF = printf/libftprintf.a
LIBS = $(LIBFT) 

all: $(SERVER) $(CLIENT)

-include $(DEP)

$(SERVER): $(SOBJ) $(LIBFT) 
	$(CC) $(CFLAGS) -o $(SERVER) $(SOBJ) $(LIBS)

$(CLIENT): $(COBJ) $(LIBFT) 
	$(CC) $(CFLAGS) -o $(CLIENT) $(COBJ) $(LIBS)

$(LIBFT):
	make -C libft

%.o: %.c Makefile minitalk.h $(LIBFT) libft/Makefile
	$(CC) $(CFLAGS) -MMD -o $@ -c $<

clean:
	rm -rf $(DEP) $(SOBJ) $(COBJ)
	make -C libft clean
#	make -C printf clean

fclean: clean
	rm -rf $(SERVER) $(CLIENT) $(LIBFT)
	rm -rf libft/Printf/libftprintf.a


re: fclean all

