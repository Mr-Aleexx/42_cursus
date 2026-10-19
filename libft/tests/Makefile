NAME	= run_tests

CC		= cc
CFLAGS	= -Wall -Wextra -I.. -g
LDFLAGS	= -L.. -lft

SRCS	= main.c
OBJS	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): lib $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o $(NAME)

lib:
	$(MAKE) -C ..

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(NAME)
	./$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all lib run clean fclean re
