#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    char    *p_dest;
    char    *p_src;
    
    p_dest = (char *)dest;
    p_src = (char *)src;
    if (p_dest <= p_src)
    {
        while(n--)
        {
            *p_dest++ = *p_src++;
        }
    }
    else
    {
        p_dest += n - 1;
        p_src += n - 1;
        while(n--)
        {
            *p_dest-- = *p_src--;
        }
    }
	return (dest);
}
