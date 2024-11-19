#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t1;
	unsigned char	*t2;
	int		i;

	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (n != 0)
	{
		if (t1[i] == t2[i])
		{
			i++;
			n--;
		}
		else
			return (t1[i] - t2[i]);
	}
	return (0);
}
