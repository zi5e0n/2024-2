/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiseshin <jiseshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 17:24:07 by jiseshin          #+#    #+#             */
/*   Updated: 2024/11/09 15:42:06 by jiseshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*t1;
	const unsigned char	*t2;

	t1 = (const unsigned char *)s1;
	t2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while ((*t1 != '\0' || *t2 != '\0') && n--)
	{
		if (*t1 == *t2)
		{
			t1++;
			t2++;
		}
		else
			return (*t1 - *t2);
	}
	return (0);
}
