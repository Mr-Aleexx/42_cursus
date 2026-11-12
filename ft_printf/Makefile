# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahazet <alex.hazet@gmail.com>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/05 17:46:15 by ahazet            #+#    #+#              #
#    Updated: 2026/11/09 16:44:03 by ahazet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g
AR			= ar
ARFLAGS		= rcs
RM			= rm -f

SRCS		= ./srcs/ft_printf.c     \
			  ./srcs/ft_putchar_fd.c \
			  ./srcs/ft_putnbr_fd.c  \
			  ./srcs/ft_putstr_fd.c  \
			  ./srcs/ft_puthex_fd.c  \
			  ./srcs/ft_putpointer_fd.c \
			  ./srcs/ft_putunbr.c

INCLUDES	= ./includes/ft_printf.h

OBJS		= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)

%.o: %.c $(INCLUDES)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
