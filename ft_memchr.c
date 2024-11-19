#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;

	t = (unsigned char *)s;
	while (n--)
	{
		if (*t == (unsigned char)c)
			return (t);
		else
			t++;
	}
	return (NULL);
}
