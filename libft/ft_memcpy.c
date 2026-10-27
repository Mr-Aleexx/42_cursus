/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:30:27 by alex              #+#    #+#             */
/*   Updated: 2026/10/27 14:45:08 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*p_dest;
	const unsigned char	*p_src;

	if (!src || !dest)
		return (NULL);
	p_dest = (unsigned char *) dest;
	p_src = (const unsigned char *) src;
	while (n--)
	{
		*p_dest++ = *p_src++;
	}
	return (dest);
}
