/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiseshin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 22:44:44 by jiseshin          #+#    #+#             */
/*   Updated: 2024/11/15 22:34:45 by jiseshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (c == 0)
		return ((char *)(s + len));
	while (len--)
	{
		if (*(s + len) == c)
			return ((char *)(s + len));
	}
	return (0);
}
