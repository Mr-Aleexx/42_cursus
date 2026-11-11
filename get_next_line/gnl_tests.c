/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex.hazet@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 16:47:10 by alex              #+#    #+#             */
/*   Updated: 2026/11/11 16:55:28 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	test_1()
{
	printf("BEGIN TEST 1");
}

int main(int ac, char *av[])
{
	(void)ac;
	(void)av;

	char *test = "Enyx t'es trop beau";
	printf("%d\n", ft_strlen(test));

	get_next_line(0);

	return 0;
}
