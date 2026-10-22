#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    const unsigned char    *s_ptr;

    if (!s)
        return (NULL);
    s_ptr = (const unsigned char*)s;
    while(n--)
    {
       if (*s_ptr == c)
           return ((void *)s_ptr);
       s_ptr++;
    }
	return (NULL);
}
