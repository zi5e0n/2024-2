/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiseshin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:21:09 by jiseshin          #+#    #+#             */
/*   Updated: 2024/11/15 20:12:03 by jiseshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	char	*arr;

	len = ft_strlen(s);
	arr = (char *)malloc(len + 1);
	if (!arr)
		return (NULL);
	ft_strlcpy(arr, s, len + 1);
	return (arr);
}
