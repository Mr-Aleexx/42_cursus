#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char		*p_dest;
    const unsigned char	*p_src;

    if (!src || !dest)
        return (NULL);

    p_dest = (unsigned char*) dest;
    p_src = (const unsigned char*) src;
    while(n--)
    {
        *p_dest++ = *p_src++;
    }

	return (dest);
}
