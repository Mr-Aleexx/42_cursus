#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *ret;
    int     len;
    int     i;

    if (!s)
        return (NULL);
    len = ft_strlen(s);
    ret = malloc(sizeof(char) * (len + 1));
    if (!ret)
        return (NULL);
    i = -1;
    while(++i < len)
    {
        ret[i] = f(i, s[i]);
    }
    ret[i] = '\0';
	return (ret);
}
