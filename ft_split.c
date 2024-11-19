#include "libft.h"

static int	count_words(char *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			cnt++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (cnt);
}

static char	*get_word(char *s, int *i, char c)
{
	char	*word;
	int		start;
	int		len;

	start = *i;
	while (s[*i] != c && s[*i] != '\0')
		(*i)++;
	len = *i - start;
	word = ft_substr(s, start, len);
	if (!word)
		return (NULL);
	return (word);
}

static void	memory_free(char **arr, int idx)
{
	int	i;

	i = 0;
	while (i < idx)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		idx;
	char	**arr;

	i = 0;
	idx = 0;
	arr = (char **)malloc(sizeof(char *) * (count_words((char *)s, c) + 1));
	if (!arr)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			arr[idx++] = get_word((char *)s, &i, c);
			if (!arr[idx - 1])
			{
				memory_free(arr, idx);
				return (NULL);
			}
		}
		else
			i++;
	}
	arr[idx] = NULL;
	return (arr);
}
