/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex.hazet@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:48:50 by alex              #+#    #+#             */
/*   Updated: 2026/11/13 19:19:40 by ahazet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*join_next_line(char *buffer, int fd)
{
	int	line;

	line = -1;
	char *temp_buf;

	temp_buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	temp_buf[0] = '\0';
	line = 1;
	while(!ft_strchr(temp_buf,'\n') && line)
	{
		line = read(fd, temp_buf, BUFFER_SIZE);
		if (line < 0 || (!line && !buffer))
			return (free(temp_buf), NULL);
		temp_buf[line] = '\0';
		if (!buffer)
			buffer = ft_strdup(temp_buf);
		else
			buffer = ft_strjoin(buffer, temp_buf);
		if (!buffer)
			return (free(temp_buf), NULL);
	}
	free(temp_buf);
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
