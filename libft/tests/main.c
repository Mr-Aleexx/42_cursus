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

int	main(int ac, char* av[])
{
    (void) ac;
    (void) av;

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

    printf("\n---------- TEST FT_MEMCPY ----------\n");
    char *src = "I love pizza";
    char dest[100];
    printf("ft_memcpy(dest, src, ft_strlen(src)): %s\n", 
            (char*)ft_memcpy(dest, src, ft_strlen(src)));

    printf("\n---------- TEST STRRCHR ----------\n");
    printf("Last occurence of z in 'i love pizza', %s\n", 
            ft_strrchr("i love pizza", 'z'));
    printf("First occurence of z in 'i love pizza', %s\n", 
            ft_strchr("i love pizza", 'z'));

    printf("\n---------- TEST MEMMOVE ----------\n");
    char src_memmove[] = "This is the src";
    char dest_memmove[100];
    printf("src_memmove[] = 'This is the src'\n");
    printf("memcpy(dest, src, n) (dest): %s\n", 
            (char*)ft_memmove(dest_memmove, src_memmove, ft_strlen(src_memmove)));
    //printf("%s\n", dest_memmove);

    printf("\n---------- TEST FT_ITOA ----------\n");
    char    *test_itoa = ft_itoa(123);
    printf("itoa(123) : %s\n", test_itoa);
    free(test_itoa);

    printf("\n---------- TEST FT_MEMSET ----------\n");
    char s_memset[] = "I love pizza";
    printf("s_memset (before) : %s\n", s_memset);
    ft_memset(s_memset, '.', 2);
    printf("s_memset (after)  : %s\n", s_memset);
     
    printf("\n---------- TEST FT_STRNCMP ----------\n");
    char s1_strncmp[] = "this i the test 1";
    char s2_strncmp[] = "this i the test 2";
    printf("strncmp(s1, s2) : %d\n", 
            ft_strncmp(s1_strncmp, s2_strncmp, 17)); // 17 is the last char
 
    printf("\n---------- TEST 'IS' FUNCTIONS ----------\n");
    printf("isalnum('a') : %d\n", ft_isalnum('a'));
    printf("isalnum(' ') : %d\n", ft_isalnum(' '));

    printf("\n---------- TEST FT_MEMCHR ----------\n");
    printf("memchr('This is a @ and it is cool', '@', 12)\n-> : %s\n", 
            (char*)ft_memchr("This is a @ and it is cool", '@', 12));

    printf("\n---------- TEST B_ZERO ----------\n");
    char s[100] = "test";
    printf("Before : %s\n", s);
    ft_bzero(s, 50);
    printf("After : %s\n", s);

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

    printf("\n---------- TEST FT_STRNSTR ----------\n");
	char 	s_strnstr[] = "Alex Leonie Colas";
	char	*needle = "Leo";
	printf("needle : %s of haystack : %s\n", 
			ft_strnstr(s_strnstr, needle, 8), 
			s_strnstr);
	printf("%s\n", ft_strnstr("hotdog", "dog", 10));
    printf("%s\n", ft_strnstr("hotdog", "dog", 3));
    printf("%s\n", ft_strnstr("hotdog", "dog", 1));
    printf("%s\n", ft_strnstr("hotdog", "dol", 3));
    printf("%s\n", ft_strnstr("hotdog", "dol", 10));
    printf("%s\n", ft_strnstr("hotdog", "dol", 1));
    printf("\n");
    printf("%s\n", strnstr("hotdog", "dog", 10));
    printf("%s\n", strnstr("hotdog", "dog", 3));
    printf("%s\n", strnstr("hotdog", "dog", 1));
    printf("%s\n", strnstr("hotdog", "dol", 3));
    printf("%s\n", strnstr("hotdog", "dol", 10));
    printf("%s\n", strnstr("hotdog", "dol", 1));

    printf("\n---------- TEST FT_PUTNBR_FD ----------\n");
	ft_putnbr_fd(123, 1);
	ft_putendl_fd("\nAlex", 1);

    printf("\n---------- TEST FT_MEMCMP ----------\n");
    char s1_memcmp[] = "this i the test 1";
    char s2_memcmp[] = "this i the test 1";
    printf("ft_memcmp(s1, s2) : %d\n", 
            ft_strncmp(s1_memcmp, s2_memcmp, 100)); // 17 is the last char
	

    return (0);
}
