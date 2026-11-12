/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex.hazet@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:47:10 by alex              #+#    #+#             */
/*   Updated: 2026/11/12 14:42:03 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(int ac, char *av[])
{
	(void)ac;
	(void)av;

	int fd = open("./gnl_test1.txt", O_RDONLY);
	char *s;

	while((s = get_next_line(fd)))
	{
		printf("%s", s);
		free(s);
	}

	return 0;
}
