#include "libft.h"

static int	len_count(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*get_str(char *arr ,int n, int len)
{
	if (n == -2147483648)
	{
		arr = "-2147483648";
		return (arr);
	}
	if (n < 0)
	{
		arr[0] = '-';
		n = -n;
	}
	while (len != 0)
	{
		len--;
		arr[len] = n % 10 + '0';
		n = n / 10;
	}
	return (arr);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		cnt;

	cnt = len_count(n);
	arr = (char *)malloc(cnt + 1);
	if (!arr)
		return (NULL);
	arr[cnt] = '\0';
	arr = get_str(arr ,n, cnt);
	return (arr);
}
