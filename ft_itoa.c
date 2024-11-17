/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiseshin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 04:48:11 by jiseshin          #+#    #+#             */
/*   Updated: 2024/11/17 14:02:57 by jiseshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

static char	*get_str(int n, int len)
{
	char	*str;

	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while
	{
		len--;
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		cnt;

	cnt = len_count(n);
	arr = (char *)malloc(cnt + 1);
	if (!arr)
		return (NULL);
	arr[len] = '\0';
	arr = get_str(n, cnt);
	return (arr);
}
