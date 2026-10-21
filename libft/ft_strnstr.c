/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazet <alex.hazet@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:33:07 by ahazet            #+#    #+#             */
/*   Updated: 2026/10/21 17:18:58 by ahazet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>


// big = haystack
// little = needle
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	needle_len;

	needle_len = ft_strlen(little);
	if (needle_len == 0)
		return (char *)(big);
	
	i = 0;
	while(big[i] && i + needle_len <= len)
	{
		if (ft_strncmp(big + i, little, needle_len) == 0)
			return (char *)(big + i);
		i++;
	}
	return (NULL);
}
