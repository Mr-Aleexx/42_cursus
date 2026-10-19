#include "libft.h"

unsigned int	ft_strlcpy(char *dest,const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len])
		++len;
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (len);
}
