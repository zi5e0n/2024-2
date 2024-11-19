#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*arr;

	start = 0;
	end = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end - 1 > start && ft_strchr(set, s1[end - 1]))
		end--;
	arr = (char *)malloc(end - start + 1);
	if (!arr)
		return (NULL);
	ft_strlcpy(arr, &s1[start], end - start + 1);
	return (arr);
}
