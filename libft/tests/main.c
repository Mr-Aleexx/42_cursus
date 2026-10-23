/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alex <alex.hazet@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 15:00:49 by alex              #+#    #+#             */
/*   Updated: 2026/10/23 17:10:47 by alex             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

extern char		mapi_callback(unsigned int index, char c);
extern void		iteri_callback(unsigned int index, char *c);
extern void		ft_lstprint(t_list *t);
extern void		free_lst(void *s);
extern void		lst_iter_f(void *s);
extern void		*lst_map_f(void *s);

#define BOLD "\033[1m"
#define RESET "\e[0m"
#define RED "\033[31m"

void test_part_1()
{
    printf( BOLD RED "\n---------- TEST PART_1 ----------\n" RESET);
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

    printf("\n---------- TEST ATOI ----------\n");
    printf("%-20s : %d\n", "atoi('123')", ft_atoi("123"));
    printf("%-20s : %d\n", "atoi('-123')", ft_atoi("-123"));
    printf("%-20s : %d\n", "atoi('--123')", ft_atoi("--123"));
    printf("%-20s : %d\n", "atoi('12djsada123')", ft_atoi("12djsada123"));

    printf("\n---------- TEST FT_CALLOC ----------\n");
    char    *s_calloc;
    size_t size_calloc = 10;
    s_calloc = ft_calloc(size_calloc, sizeof(char));
    for (size_t i = 0 ; i < size_calloc ; i++)
	{
        ft_putnbr_fd(s_calloc[i], 2);
	}
	free(s_calloc);

    printf("\n---------- TEST FT_STRDUP ----------\n");
    char    s_strdup[100] = "This is the string to dup";
    char    *dup_strdup;
    dup_strdup = ft_strdup(s_strdup);
    printf("dup_strup : %s\n", dup_strdup);
	free(dup_strdup);
}


void test_part_2()
{
    printf( BOLD RED "\n---------- TEST PART_2 ----------\n" RESET);
    printf("\n---------- TEST FT_SUBSTR ----------\n");
	char	s_substr[] = "I love cats so much";
	char	*s_subsubstr;
    int index_substr = 15;
    int until_substr = 10;
	s_subsubstr = ft_substr(s_substr, index_substr, until_substr);
	printf("%-10s : %s\n%-10s : %*s%*s\n%-10s : %s\n", 
            "string", s_substr, 
            "substring", index_substr + 1, "^", until_substr - 1, "^",
            "result", s_subsubstr);
	free(s_subsubstr);

    printf("\n---------- TEST FT_STRJOIN ----------\n");
    char s_join1[] = "This is the s1";
    char s_join2[] = "This is the s2";
    char *s_joined;
    s_joined = ft_strjoin(s_join1, s_join2);
    printf("%-10s : %s\n%-10s : %s\n%-10s : %s\n",
            "Joining", s_join1,
            "with", s_join2,
            "result", s_joined);
	free(s_joined);

    printf("\n---------- TEST FT_STRTRIM ----------\n");
	char	s_strtrim[] = "##TEST##";
	char	*s_trimmed;
    char s_charset_trim[] = "#";
	s_trimmed = ft_strtrim(s_strtrim, s_charset_trim);
	printf("%-10s : %s\n%-10s : %s\n%-10s : %s\n",
          "Trimming", s_strtrim,
          "with", s_charset_trim,
          "result", s_trimmed);
    free(s_trimmed);

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
	int		itoa_n = 0;
    char	*test_itoa = ft_itoa(itoa_n);
    printf("itoa(%d) : %s\n", itoa_n, test_itoa);
    free(test_itoa);

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
}

void test_part_3()
{
    printf( BOLD RED "\n---------- TEST PART_3 ----------\n" RESET);
    printf("\n---------- TEST FT_LSTNEW ----------\n");
	int	node_index = 0;
	char node_name[100];
	snprintf(node_name, sizeof(node_name), "node : %d", node_index++);
	t_list *t = ft_lstnew(ft_strdup(node_name));
	t_list *t_map;
	for(int i = 0 ; i < 10 ; i++)
	{
		snprintf(node_name, sizeof(node_name), "node : %d", node_index++);
		ft_lstadd_back(&t, ft_lstnew(strdup(node_name)));
	}
    printf("list t...\n");
	ft_lstprint(t);

    printf("list t with iteration + 'a' at node[0]...\n");
	ft_lstiter(t, lst_iter_f);
	ft_lstprint(t);

    printf("list t_map with mapped + 'b' at node[0]...\n");
	t_map = ft_lstmap(t, lst_map_f, free_lst);
	ft_lstprint(t_map);

	// clearing the lists
	ft_lstclear(&t, free_lst);
	ft_lstclear(&t_map, NULL);
}

int	main(int ac, char* av[])
{
    (void) ac;
    (void) av;
	test_part_1();
    test_part_2();
	test_part_3();

    return (0);
}
