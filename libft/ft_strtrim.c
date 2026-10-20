/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazet <alex.hazet@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 19:40:54 by ahazet            #+#    #+#             */
/*   Updated: 2026/10/20 20:10:11 by ahazet           ###   ########.fr       */
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
	int		start;
	int		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1) - 1;
	while(s1[start] && is_charset(set, s1[start]))
		start++;
	while(s1[end] && is_charset(set, s1[end]))
		end--;
	ret = malloc(sizeof(char) * (end - start + 1));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s1 + start, end + 1);
	ret[end + 1] = '\0';
	return (ret);
}
