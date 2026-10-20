#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
    char    *s_ptr;

    if (!s)
        return (NULL);
    s_ptr = (char*)s;
    while(n-- && *s_ptr)
    {
       if (*s_ptr == c)
           return (s_ptr);
       s_ptr++;
    }
	return (NULL);
}
