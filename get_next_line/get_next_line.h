/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex.hazet@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:49:28 by alex              #+#    #+#             */
/*   Updated: 2026/11/11 17:16:35 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
#define GET_NEXT_LINE

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 10

char	*get_next_line(int fd);
char	*ft_strchr(const char *s, int c);

#endif
