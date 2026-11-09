/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazet <alex.hazet@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 15:19:05 by ahazet            #+#    #+#             */
/*   Updated: 2026/11/06 17:42:48 by ahazet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putpointer_fd(unsigned int n, int fd)
{
	ft_putstr_fd("0x", fd);
	return (2 + ft_puthex_fd(n, 'x', fd));
}
