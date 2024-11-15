/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiseshin <jiseshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 17:27:35 by jiseshin          #+#    #+#             */
/*   Updated: 2024/11/15 19:48:05 by jiseshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dt;
	const unsigned char	*st;

	dt = (unsigned char *)dest;
	st = (const unsigned char *)src;
	while (n--)
		*dt++ = *st++;
	return (dest);
}
