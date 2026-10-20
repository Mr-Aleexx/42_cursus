/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex.hazet@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:01:00 by alex              #+#    #+#             */
/*   Updated: 2026/10/20 16:26:01 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
    void    *ret;
    size_t  i;

    ret = malloc(nmemb * size);
    if (!ret)
        return (NULL);
    ft_memset(ret, 0, nmemb * size);
	return (ret);
}
