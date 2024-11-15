/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiseshin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 17:37:38 by jiseshin          #+#    #+#             */
/*   Updated: 2024/11/14 11:20:51 by jiseshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*arr;

	start = 0;
	end = ft_strlen(s1);
	while (s1[start] != '\0' && ft_strchr(set, s1[start]))
		start++;
	while (end - 1 > start && ft_strchr(set, s1[end - 1]))
		end--;
	arr = (char *)malloc(end - start + 1);
	if (!arr)
		return (NULL);
	ft_strlcpy(arr, &s1[start], end - start + 1);
	return (arr);
}
