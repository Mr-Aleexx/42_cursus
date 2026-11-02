/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:01:49 by alex              #+#    #+#             */
/*   Updated: 2026/10/27 14:29:46 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdint.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		i;
	size_t		dlen;
	size_t		slen;
	size_t		sum;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	sum = 0;
	if (size <= dlen)
		return (slen + size);
	else
		sum = slen + dlen;
	i = 0;
	while (src[i] && dlen < size - 1)
		dst[dlen++] = src[i++];
	dst[dlen] = '\0';
	return (sum);
}
