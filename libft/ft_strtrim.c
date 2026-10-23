/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazet <alex.hazet@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:40:54 by ahazet            #+#    #+#             */
/*   Updated: 2026/10/23 15:24:22 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


static int	is_charset(const char *charset, char c)
{
	while(*charset)
	{
		if (*charset == c)
			return (1);
		charset++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && is_charset(set, s1[start]))
		start++;
	while (end > start && is_charset(set, s1[end - 1]))
		end--;
	ret = malloc(sizeof(char) * (end - start + 1));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1 + start, end - start);
	ret[end - start] = '\0';
	return (ret);
}
