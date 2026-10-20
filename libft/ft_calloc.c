/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex.hazet@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:01:00 by alex              #+#    #+#             */
/*   Updated: 2026/10/20 17:32:58 by ahazet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
    void    *ret;

    ret = malloc(nmemb * size);
    if (!ret)
        return (NULL);
    ft_memset(ret, 0, nmemb * size);
	return (ret);
}
