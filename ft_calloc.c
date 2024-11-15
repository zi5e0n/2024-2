/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiseshin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 15:03:57 by jiseshin          #+#    #+#             */
/*   Updated: 2024/11/15 20:11:25 by jiseshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*arr;

	if (size != 0 && nmemb != (nmemb * size) / size)
		return (NULL);
	arr = (char *)malloc(nmemb * size);
	if (!arr)
		return (NULL);
	return (ft_memset(arr, 0, nmemb * size));
}
