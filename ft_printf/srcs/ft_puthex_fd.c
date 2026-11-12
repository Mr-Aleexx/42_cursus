/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazet <alex.hazet@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:10:47 by ahazet            #+#    #+#             */
/*   Updated: 2026/11/06 17:44:45 by ahazet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_puthex_fd(unsigned long long n, char c, int fd)
{
	char	*hex;
	int		i = 0;

	hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n > 15)
		i += ft_puthex_fd(n / 16, c, fd);
	ft_putchar_fd(hex[n % 16], fd);
	return (i + 1);
}
