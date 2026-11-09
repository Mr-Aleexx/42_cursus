# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahazet <alex.hazet@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/05 17:45:34 by ahazet            #+#    #+#              #
#    Updated: 2026/11/05 19:08:29 by ahazet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= run_tests
VALGRIND = valgrind

CC		= cc
CFLAGS	= -Wall -Wextra -I.. -g
LDFLAGS	= -lbsd
VALGRIND_FLAG = --leak-check=full

SRCS	= ./main.c
OBJS	= $(SRCS:.c=.o)

LIB = ../ft_printf.a

all: $(NAME)

$(NAME): $(OBJS) lib
	$(CC) $(OBJS) $(LIB) $(LDFLAGS) -o $(NAME)

lib:
	$(MAKE) -C ..

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

run: $(NAME)
	./$(NAME)

debmem: $(NAME)
	$(VALGRIND) $(VALGRIND_FLAG) ./$(NAME)

clean:
	$(MAKE) -C .. clean

fclean: clean
	$(MAKE) -C .. fclean

re: fclean all

.PHONY: all lib run clean fclean re
