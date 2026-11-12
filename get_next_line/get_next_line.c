/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex.hazet@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:48:50 by alex              #+#    #+#             */
/*   Updated: 2026/11/12 14:45:09 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*join_next_line(char *buffer, int fd)
{
	int	line;

	line = -1;
	char temp_buf[BUFFER_SIZE + 1];

	while (++line <= BUFFER_SIZE)
		temp_buf[line] = '\0';
	line = 1;
	while(!ft_strchr(temp_buf,'\n') && line)
	{
		line = read(fd, temp_buf, BUFFER_SIZE);
		temp_buf[line] = '\0';
		if (line < 0 || (!line && !buffer))
			return (NULL);
		if (!buffer)
			buffer = ft_strdup(temp_buf);
		else
			buffer = ft_strjoin(buffer, temp_buf);
		if (!buffer)
			return (NULL);
	}
	return (buffer);
}


char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*new_buffer;
	char		*next_line;
	int			i;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	buffer = join_next_line(buffer, fd);
	if (!buffer)
		return (NULL);
	i = locate_new_line(buffer);
	if (buffer[i] == '\n')
		i++;
	next_line = ft_substr(buffer, 0, i);
	new_buffer = ft_substr(buffer, i, ft_strlen(buffer) - i);
	free(buffer);
	buffer = new_buffer;
	return (next_line);
}
