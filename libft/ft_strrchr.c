/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:31:04 by alex              #+#    #+#             */
/*   Updated: 2026/10/27 14:43:56 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// returns the last occurence of c
char	*ft_strrchr(const char *s, int c)
{
	char	*occ;

	if (!s)
		return (NULL);
	occ = NULL;
	while (*s)
	{
		if (*s == c)
			occ = (char *)s;
		s++;
	}
	return (occ);
}
