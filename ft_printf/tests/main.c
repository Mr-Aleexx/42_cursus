/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazet <alex.hazet@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 19:01:46 by ahazet            #+#    #+#             */
/*   Updated: 2026/11/06 17:13:21 by ahazet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_printf_tests()
{
	ft_printf("Hello world!\n");
	ft_printf("Character: %c\n", 'A');
	ft_printf("String: %s\n", "42");
	ft_printf("Pointer: %p\n", (void *)0x1234);
	ft_printf("Decimal: %d\n", 42);
	ft_printf("Integer: %i\n", -42);
	ft_printf("Unsigned: %u\n", 4294967295u);
	ft_printf("Hex lowercase: %x\n", 255);
	ft_printf("Hex uppercase: %X\n", 255);
	ft_printf("Percent: %%\n");

	ft_printf("Empty string: %s\n", "");
	ft_printf("NULL string: %s\n", (char *)NULL);
	ft_printf("Zero char: %c\n", 0);
	ft_printf("Zero integer: %d\n", 0);
	ft_printf("Negative: %d\n", -2147483648);
	ft_printf("Positive max: %d\n", 2147483647);
	ft_printf("Unsigned max: %u\n", 4294967295u);
	ft_printf("Hex zero: %x\n", 0);
	ft_printf("Pointer NULL: %p\n", (void *)NULL);

	ft_printf("%d %s %c", 42, "school", '!');
	ft_printf("%x%x%x\n", 10, 20, 30);
	ft_printf("%s%d%s%d\n", "A", 1, "B", 2);
	ft_printf("%c%c%c%c\n", '4', '2', '!', '\n');
	ft_printf("%p %d %x\n", (void *)0x1234, 42, 42);

	int ret;

	ret = ft_printf("Hello");
	ft_printf("\nReturn: %d\n", ret);

	ret = ft_printf("%d", 42);
	ft_printf("\nReturn: %d\n", ret);

	ret = ft_printf("");
	ft_printf("\nReturn: %d\n", ret);

	ret = ft_printf("%c", 0);
	ft_printf("\nReturn: %d\n", ret);

	ret = ft_printf("42 %s!", "school");
	ft_printf("\nReturn: %d\n", ret);

	ft_printf("%d\n", 2147483647);
	ft_printf("%d\n", -2147483648);
	ft_printf("%u\n", 4294967295u);
	ft_printf("%u\n", 0);
	ft_printf("%x\n", 2147483647);
	ft_printf("%X\n", 4294967295u);

	ft_printf("%%\n");
	ft_printf("%%%%\n");
	ft_printf("%%%c\n", 'A');
	ft_printf("%d%%\n", 100);
	ft_printf("No conversions\n");
	ft_printf("Trailing percent: %");
	ft_printf("%x\n", LONG_MAX);
}

void	printf_tests()
{
	printf("Hello world!\n");
	printf("Character: %c\n", 'A');
	printf("String: %s\n", "42");
	printf("Pointer: %p\n", (void *)0x1234);
	printf("Decimal: %d\n", 42);
	printf("Integer: %i\n", -42);
	printf("Unsigned: %u\n", 4294967295u);
	printf("Hex lowercase: %x\n", 255);
	printf("Hex uppercase: %X\n", 255);
	printf("Percent: %%\n");

	printf("Empty string: %s\n", "");
	printf("NULL string: %s\n", (char *)NULL);
	printf("Zero char: %c\n", 0);
	printf("Zero integer: %d\n", 0);
	printf("Negative: %d\n", -2147483648);
	printf("Positive max: %d\n", 2147483647);
	printf("Unsigned max: %u\n", 4294967295u);
	printf("Hex zero: %x\n", 0);
	printf("Pointer NULL: %p\n", (void *)NULL);

	printf("%d %s %c", 42, "school", '!');
	printf("%x%x%x\n", 10, 20, 30);
	printf("%s%d%s%d\n", "A", 1, "B", 2);
	printf("%c%c%c%c\n", '4', '2', '!', '\n');
	printf("%p %d %x\n", (void *)0x1234, 42, 42);

	int ret;

	ret = printf("Hello");
	printf("\nReturn: %d\n", ret);

	ret = printf("%d", 42);
	printf("\nReturn: %d\n", ret);

	ret = printf("");
	printf("\nReturn: %d\n", ret);

	ret = printf("%c", 0);
	printf("\nReturn: %d\n", ret);

	ret = printf("42 %s!", "school");
	printf("\nReturn: %d\n", ret);

	printf("%d\n", 2147483647);
	printf("%d\n", -2147483648);
	printf("%u\n", 4294967295u);
	printf("%u\n", 0);
	printf("%x\n", 2147483647);
	printf("%X\n", 4294967295u);

	printf("%%\n");
	printf("%%%%\n");
	printf("%%%c\n", 'A');
	printf("%d%%\n", 100);
	printf("No conversions\n");
	printf("Trailing percent: %");
	//printf("%d\n",printf("%p\n", LONG_MAX));
}

int main(int ac, char*av[])
{
	(void)ac;
	(void)av;
	ft_printf("\n===========TESTS OG PRINTF===========\n");
	printf_tests();
	ft_printf("\n===========TESTS FT_PRINTF===========\n");
	ft_printf_tests();
	int ret = printf("INT MIN : %d\n", INT_MIN);
	printf("ret : %d\n", ret);
	ft_printf("INT MIN : %d\n", INT_MIN);
	return 0;
}
