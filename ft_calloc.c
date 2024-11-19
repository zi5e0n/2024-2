#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;

	if (size != 0 && nmemb != (nmemb * size) / size)
		return (NULL);
	arr = (char *)malloc(nmemb * size);
	if (!arr)
		return (NULL);
	return (ft_memset(arr, 0, nmemb * size));
}
