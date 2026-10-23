/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex.hazet@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 13:50:51 by alex              #+#    #+#             */
/*   Updated: 2026/10/23 13:53:14 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int int_size(int n)
{
    int		i;
	long	nb;

	nb = n;
    i = 0;
    if (nb <= 0)
    {
        i++;
        nb *= -1;
    }
    while(nb > 0)
    {
        nb /= 10;
        i++;
    }
    return (i);
}

char	*ft_itoa(int n)
{
    char	*buffer;
    int		i;
	long	nb;

	nb = n;
	i = int_size(n);
    buffer = malloc(sizeof(char) * (i + 1));
    if (!buffer)
	{
        return (NULL);
	}
	buffer[i] = '\0';
    if (nb < 0)
    {
        buffer[--i] = '-';
        nb = -nb;
    }
    while(nb > 0)
    {
        buffer[--i] = (nb % 10) + '0';
        nb /= 10;
    }
	if (n == 0)
		buffer[0] = '0';
    return (buffer);
}
