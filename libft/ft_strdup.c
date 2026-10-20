/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex.hazet@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:01:39 by alex              #+#    #+#             */
/*   Updated: 2026/10/20 15:01:40 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
    char    *ret;
    int     i;

    ret = (char*) malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!ret)
        return (NULL);
    i = -1;
    while(s[++i])
        ret[i] = s[i];
    ret[i] = '\0';
	return (ret);
}
