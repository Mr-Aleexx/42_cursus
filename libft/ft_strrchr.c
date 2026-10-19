#include "libft.h"

// returns the last occurence of c
char	*ft_strrchr(const char *s, int c)
{
    char    *occ;
	if (!s)
        return (NULL);

    occ = NULL;
    while(*s)
    {
        if (*s == c)
            occ = (char*)s;
        s++;
    }

    return (occ);
}
