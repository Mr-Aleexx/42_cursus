/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:01:30 by alex              #+#    #+#             */
/*   Updated: 2026/10/27 14:42:35 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_charset(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (charset[i] == c)
			return (1);
	return (0);
}

static int	ft_len(const char *str, char *charset)
{
	int	i;
	int	len;

	len = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] && !is_charset(str[i], charset))
			++len;
		while (str[i] && !is_charset(str[i], charset))
			++i;
	}
	return (len);
}

static int	ft_word_len(const char *str, char *charset)
{
	int	len;
	int	i;

	len = 0;
	i = -1;
	while (str[++i] && !is_charset(str[i], charset))
		++len;
	return (len);
}

char	**ft_split(const char *str, char *charset)
{
	char	**strs;
	int		len;
	int		i;
	int		j;

	strs = (char **)malloc(sizeof(char *) * (ft_len(str, charset) + 1));
	if (!strs)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && j < ft_len(str, charset))
	{
		while (str[i] && is_charset(str[i], charset))
			++i;
		len = ft_word_len(str + i, charset);
		strs[j] = (char *)malloc(sizeof(char) * len + 1);
		if (!strs[j])
			return (NULL);
		ft_strlcpy(strs[j++], str + i, len + 1);
		i += len;
	}
	strs[j] = NULL;
	return (strs);
}
