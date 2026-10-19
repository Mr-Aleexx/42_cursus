#include "libft.h"

static int int_size(int n)
{
    int i;

    i = 0;
    if (n < 0)
    {
        n -= n;
        i++;
    }
    while(n)
    {
        n /= 10;
        i++;
    }
    return i;
}

char	*ft_itoa(int n)
{
    char *buffer;
    char local_buffer[17]; // lol
    int i;
    int j;

    buffer = malloc(sizeof(char) * int_size(n) + 1);
    if (!buffer)
        return (NULL);
    i = -1;
    j = -1;
    if (n < 0)
    {
        local_buffer[++i] = '-';
        n = -n;
    }
    while(n)
    {
        local_buffer[++i] = (n % 10) + '0';
        n /= 10;
    }
    while(i >= 0)
        buffer[++j] = local_buffer[i--];
    buffer[++j] = '\0';
    return (buffer);
}
