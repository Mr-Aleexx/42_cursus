/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazet <alex.hazet@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:44:32 by ahazet            #+#    #+#             */
/*   Updated: 2026/11/09 16:43:48 by ahazet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_format(va_list *list, const char *c)
{
	int	i;

	i = 0;
	if (*c == 'd')
		i += ft_putnbr_fd(va_arg(*list, int), STDOUT_FILENO);
	else if (*c == 'i')
		i += ft_putnbr_fd(va_arg(*list, int), STDOUT_FILENO);
	else if (*c == 'u')
		i += ft_putunbr_fd(va_arg(*list, unsigned int), STDOUT_FILENO);
	else if (*c == 's')
		i += ft_putstr_fd(va_arg(*list, char *), STDOUT_FILENO);
	else if (*c == 'x' || *c == 'X')
		i += ft_puthex_fd(va_arg(*list, unsigned int), *c, STDOUT_FILENO);
	else if (*c == 'p')
		i += ft_putpointer_fd(va_arg(*list, unsigned long long), STDOUT_FILENO);
	else if (*c == 'c')
		i += ft_putchar_fd(va_arg(*list, int), STDOUT_FILENO);
	return (i);
}

int	ft_printf(const char *format, ... )
{
	int	i;
	int	len;
	va_list list;

	if (!format)
		return (-1);
	va_start(list, format);
	len = 0;
	i = 0;
	while(format[i])
	{
		if (format[i] == '%' && format[i + 1])
		{
			i++;
			if (format[i] == '%')
				len += ft_putchar_fd('%', STDOUT_FILENO);
			else
				len += ft_format(&list, &format[i]);
		}
		else
			len += ft_putchar_fd(format[i], STDOUT_FILENO);
		i++;
	}
	va_end(list);
	return (len);
}

