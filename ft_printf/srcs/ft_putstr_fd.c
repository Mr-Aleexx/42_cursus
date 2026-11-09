/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazet <alex.hazet@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:43:01 by ahazet            #+#    #+#             */
/*   Updated: 2026/11/06 17:42:38 by ahazet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = -1;
	if (!s)
	{
		ft_putstr_fd("(null)", fd);
		return 0;
	}

	while (s[++i])
		ft_putchar_fd(s[i], fd);
	return (i);
}
