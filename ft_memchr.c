/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiseshin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:14:54 by jiseshin          #+#    #+#             */
/*   Updated: 2024/11/09 03:37:13 by jiseshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*t;

	t = (unsigned char *)s;
	while (n--)
	{
		if (*t == (unsigned char)c)
			return (t);
		else
			t++;
	}
	return (NULL);
}
