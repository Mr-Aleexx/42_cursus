/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:30:23 by alex              #+#    #+#             */
/*   Updated: 2026/10/27 14:27:14 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_ptr;

	if (!s)
		return (NULL);
	s_ptr = (const unsigned char *)s;
	while (n--)
	{
		if (*s_ptr == c)
			return ((void *)s_ptr);
		s_ptr++;
	}
	return (NULL);
}
