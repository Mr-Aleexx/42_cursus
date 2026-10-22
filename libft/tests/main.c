/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex.hazet@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:00:49 by alex              #+#    #+#             */
/*   Updated: 2026/10/21 18:49:52 by ahazet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

extern char    mapi_callback(unsigned int index, char c);
extern void    iteri_callback(unsigned int index, char *c);

void test_part_1()
{
	printf("\n---------- TEST FT_IS* ----------\n");
	printf("%-20s : %d | %-20s : %d\n",
		"is_alpha('8')", ft_isalpha('8'),
		"is_alpha('a')", ft_isalpha('a'));
	printf("%-20s : %d | %-20s : %d\n",
		"is_digit('a')", ft_isdigit('a'),
		"is_digit('8')", ft_isdigit('8'));
	printf("%-20s : %d | %-20s : %d\n",
		"is_alnum('\\n')", ft_isalnum('\n'),
		"is_alnum('a')", ft_isalnum('a'));
	printf("%-20s : %d | %-20s : %d\n",
		"is_ascii(129)", ft_isascii(129),
		"is_ascii('a')", ft_isascii('a'));
	printf("%-20s : %d | %-20s : %d\n",
		"is_print('\\0')", ft_isprint('\0'),
		"is_print('a')", ft_isprint('a'));

	printf("\n---------- TEST FT_STRLEN ----------\n");
	char	*s_strlen = "123";
	printf("%-20s : %zu\n", 
			"strlen(s_strlen) ", ft_strlen(s_strlen));

    printf("\n---------- TEST FT_MEMSET ----------\n");
    char s_memset[] = "I love pizza";
    printf("s_memset (before) : %s\n", s_memset);
    ft_memset(s_memset, '.', 2);
    printf("s_memset (after)  : %s\n", s_memset);

    printf("\n---------- TEST B_ZERO ----------\n");
    char s[100] = "test";
    printf("Before : %s\n", s);
    ft_bzero(s, 50);
    printf("After  : %s\n", s);

    printf("\n---------- TEST FT_MEMCPY ----------\n");
    char src[100] = "abcdefg";
	ft_memcpy(src + 3, src, 5);
    printf("ft_memcpy(dest, src, ft_strlen(src)): %s\n", src);

    printf("\n---------- TEST FT_MEMMOVE ----------\n");
    char src_memmove[100] = "abcdefg";
	ft_memmove(src_memmove + 3, src_memmove, 5);
    printf("ft_memcpy(dest, src, ft_strlen(src)): %s\n", src_memmove);

    printf("\n---------- TEST FT_STRLCPY ----------\n");
	char src_strlcpy[] = "abcdefg";
	char dest_strlcpy[100];
	size_t size_copy = 10;
	printf("%-10s %s \n%-10s %s\n%-10s %zu...\n", 
			"copying", src_strlcpy, 
			"to", "dest_strlcpy",
			"at", size_copy);
	ft_strlcpy(dest_strlcpy, src_strlcpy, size_copy);
	printf("%-10s : %s\n", 
			"dest", dest_strlcpy);

    printf("\n---------- TEST FT_STRLCAT ----------\n");
	char src_strlcat[] = "hijklm";
	char dest_strlcat[100] = "abcdefg";
	size_t size_cat = 10;
	printf("%-10s %s \n%-10s %s\n%-10s %zu...\n", 
			"concat", src_strlcat, 
			"to", dest_strlcat,
			"at", size_cat);
	ft_strlcat(dest_strlcat, src_strlcat, size_cat);
	printf("%-10s : %s\n", 
			"dest", dest_strlcat);

	printf("\n---------- TEST FT_TO ----------\n");
	printf("%-12s : %c | %-12s : %c\n",
		"to_upper('A')", ft_toupper('A'),
		"to_upper('a')", ft_toupper('a'));
	printf("%-12s : %c | %-12s : %c\n",
		"to_lower('A')", ft_tolower('A'),
		"to_lower('a')", ft_tolower('a'));

    printf("\n---------- TEST STRRCHR ----------\n");
    printf("Last  occurence of z in 'i love pizza', %s\n", 
            ft_strrchr("i love pizza", 'z'));
    printf("First occurence of z in 'i love pizza', %s\n", 
            ft_strchr("i love pizza", 'z'));

    printf("\n---------- TEST FT_STRNCMP ----------\n");
    char s1_strncmp[] = "this i the test 1";
    char s2_strncmp[] = "this i the test 2";
	size_t size_strncmp = ft_strlen(s1_strncmp);
	printf("%-10s %s\n%-10s %s\n"
			"%-10s %*s\n%-10s %d\n",
			"comparing", s1_strncmp,
			"with", s2_strncmp,
			"until", (int)size_strncmp, "^",
			"result", ft_strncmp(s1_strncmp, s2_strncmp, size_strncmp));

    printf("\n---------- TEST MEMCHR ----------\n");
    printf("First occurence of z in 'i love pizza', %s\n", 
		  (char *)ft_memchr("i love pizza", 'z', 1));


    printf("\n---------- TEST FT_MEMCMP ----------\n");
    char s1_memcmp[] = "this i the test 1";
    char s2_memcmp[] = "this i the test 2";
	size_t size_memcmp = ft_strlen(s1_memcmp) - 4;
	printf("%-10s %s\n%-10s %s\n"
			"%-10s %*s\n%-10s %d\n",
			"comparing", s1_memcmp,
			"with", s2_memcmp,
			"until", (int)size_memcmp, "^",
			"result", ft_strncmp(s1_memcmp, s2_memcmp, size_memcmp));

    printf("\n---------- TEST FT_STRNSTR ----------\n");
	char 	s_strnstr[] = "Alex Leonie Colas";
	char	*needle = "Leo";
	printf("needle : %s of haystack : %s\n", 
			ft_strnstr(s_strnstr, needle, 8), 
			s_strnstr);
}

int	main(int ac, char* av[])
{
    (void) ac;
    (void) av;
	test_part_1();

    printf("\n---------- TEST ATOI ----------\n");
    printf("atoi('123') : %d\n",ft_atoi("123"));
    printf("atoi('-123') : %d\n",ft_atoi("-123"));
    printf("atoi('--123') : %d\n",ft_atoi("--123"));
    printf("atoi('12djsada123') : %d\n",ft_atoi("12djsada123"));

    printf("\n---------- TEST FT_SPLIT ----------\n");
    printf("string : my.name/is_alex:test\n");
    printf("charset : ./_\n");
    char *s_split = "my.name/is_alex:test";
    char *charset = "./_";
    char **s_splitted = ft_split(s_split, charset);
    for (int i = 0 ; s_splitted[i] != NULL; i++)
        printf("string splitted[%d] : %s\n", i, s_splitted[i]);
    for (int i = 0 ; s_splitted[i] != NULL ; i++)
        free(s_splitted[i]);
    free(s_splitted);



    printf("\n---------- TEST FT_ITOA ----------\n");
    char    *test_itoa = ft_itoa(123);
    printf("itoa(123) : %s\n", test_itoa);
    free(test_itoa);

     
 
    printf("\n---------- TEST FT_STRDUP ----------\n");
    char    s_strdup[100] = "This is the string to dup";
    char    *dup_strdup;
    dup_strdup = ft_strdup(s_strdup);
    printf("dup_strup : %s\n", dup_strdup);
	free(dup_strdup);

    printf("\n---------- TEST FT_SUBSTR ----------\n");
	char	s_substr[] = "I love cats so much, my cat Wilson is so cute";
	char	*s_subsubstr;
	s_subsubstr = ft_substr(s_substr, 7, 4);
	printf("s_subsubstr : %s\n", s_subsubstr);
	free(s_subsubstr);

    printf("\n---------- TEST FT_STRTRIM ----------\n");
	char	s_strtrim[] = "\n\tI#love.ca\tts\n";
	char	*s_trimmed;
	s_trimmed = ft_strtrim(s_strtrim, "\t\n");
	printf("trimmed string : %s\n", s_trimmed);
    free(s_trimmed);

    printf("\n---------- TEST FT_STRMAPI ----------\n");
    char    s_strmapi[] = "I like my cat Wilson";
    char    *ret_strmapi;
    printf("Before : %s\n", s_strmapi);
    ret_strmapi = ft_strmapi(s_strmapi, mapi_callback);
    printf("After : %s\n", ret_strmapi);
    free(ret_strmapi);

    printf("\n---------- TEST FT_STRITERI ----------\n");
    char    s_striteri[] = "I like my cat Wilson";
    printf("Before : %s\n", s_striteri);
    ft_striteri(s_striteri, iteri_callback);
    printf("After : %s\n", s_striteri);

    return (0);
}
