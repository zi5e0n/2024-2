/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiseshin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:44:44 by jiseshin          #+#    #+#             */
/*   Updated: 2024/11/15 20:08:04 by jiseshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	i = len - 1;
	if (len == 0)
		return (0);
	if (c == 0)
		return ((char *)(s + len));
	while (i != 0)
	{
		if (*(s + i) == c)
			return ((char *)(s + i));
		else
			i--;
	}
	return (0);
}
