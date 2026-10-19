#include "../libft.h"

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


    return 0;
}
