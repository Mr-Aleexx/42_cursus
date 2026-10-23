# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahazet <your@email.com>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/20 17:32:46 by ahazet            #+#    #+#              #
#    Updated: 2026/10/23 15:09:56 by alex             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= run_tests
VALGRIND = valgrind

CC		= cc
CFLAGS	= -Wall -Wextra -I.. -g
LDFLAGS	= -L.. -lft -lbsd
VALGRIND_FLAG = --leak-check=full

SRCS	= main.c \
		  callbacks.c \
		  utils.c
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

debmem: $(NAME)
	$(VALGRIND) $(VALGRIND_FLAG) ./$(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all lib run clean fclean re
