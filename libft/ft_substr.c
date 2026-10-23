#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*ret;
	unsigned int		s_len;
	if (!s)
		return (NULL);
	
	s_len = ft_strlen(s);
	if (start > s_len)
    {
        return (ft_strdup(""));
    }
    if (start + len > s_len)
    {
        len = s_len - start;
    }
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (NULL);
	ft_memcpy(ret, s + start, len);
	ret[len] = '\0';
	return (ret);
}
