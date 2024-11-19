#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dt;
	const unsigned char	*st;

	dt = (unsigned char *)dest;
	st = (const unsigned char *)src;
	while (n--)
		*dt++ = *st++;
	return (dest);
}
