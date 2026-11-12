/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:39:07 by ahazet            #+#    #+#             */
/*   Updated: 2026/11/11 08:39:31 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <stddef.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <bsd/string.h>
# include <limits.h>
# include <stdint.h>
# include <stdarg.h>

int		ft_printf(const char *format, ... );
int		ft_format(va_list *list, const char *c);

int	ft_putnbr_fd(int n, int fd);
int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_puthex_fd(unsigned long long n, char c, int fd);
int	ft_putpointer_fd(unsigned long long n, int fd);
int	ft_putunbr_fd(unsigned int n, int fd);

#endif
