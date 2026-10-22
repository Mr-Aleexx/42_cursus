#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p_s1;
	unsigned char	*p_s2;
	size_t				i;

	p_s1 = (unsigned char *) s1;
	p_s2 = (unsigned char *) s2;

	i = -1;
	while(++i < n)
		if (p_s1[i] != p_s2[i])
			return (p_s1[i] - p_s2[i]);
	return (0);
}
