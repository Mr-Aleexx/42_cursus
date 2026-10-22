/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex.hazet@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:01:49 by alex              #+#    #+#             */
/*   Updated: 2026/10/20 20:17:46 by ahazet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdint.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    int dlen;
    int slen;

    dlen = ft_strlen(dst);
    slen = ft_strlen(src);
    if ((int)size <= dlen)
        return (size + dlen);
    i = 0;
    while(src[i] && dlen + i <= size - 1)
    {
        dst[dlen + i] = src[i];
        i++;
    }
    dst[i + dlen] = '\0';
	return (slen + dlen);
}
