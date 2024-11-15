/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiseshin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 04:48:11 by jiseshin          #+#    #+#             */
/*   Updated: 2024/11/15 00:07:53 by jiseshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_count(int n)
{
	int	len;

	len = 1;
	if (n == -2147483648)
	{
		len = 11;
		return (len);
	}
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n >= 10)
	{
		while (n)
		{
			n = n / 10;
			len++;
		}
	}
	return (len);
}

static char	*get_str(int n, int len)
{
	char	*str;

	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	if (n < 0)
		n = -n;
	arr[len] = '\0';
	len--;
	while (len != 0 && n >= 10)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	str[len] = n + '0';
	if (len != 0)
		str[len] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		cnt;

	cnt = len_count(n) + 1;
	arr = (char *)malloc(cnt);
	if (!arr)
		return (NULL);
	arr = get_str(n, cnt);
	return (arr);
}
