/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   callbacks.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex.hazet@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 17:29:17 by alex              #+#    #+#             */
/*   Updated: 2026/10/25 17:29:41 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// just adding 1 to char for test purposes
char    mapi_callback(unsigned int index, char c)
{
	printf("This is the char %c at index %d\n", c, index);
	return (c);
}

void    iteri_callback(unsigned int index, char *c)
{
	printf("Changing %c to %c at index %d\n",
	       *c, *c + 1, index);
	*c += 1;
}

void	lst_iter_f(void *s)
{
	char	*p;

	p = (char *)s;
	p[0] = 'a';
}

void	*lst_map_f(void *s)
{
	char	*p;

	p = (char *)s;
	p[0] = 'b';
	return (p);
}

void	free_lst(void *s)
{
	free(s);
}
