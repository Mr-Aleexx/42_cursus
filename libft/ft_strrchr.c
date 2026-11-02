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
	char	char_c;
	int		i;

	char_c = (char)c;
	i = ft_strlen(s);
	s += i;
	while (i-- >= 0)
	{
		if (*s == char_c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
