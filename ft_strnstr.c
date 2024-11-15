/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiseshin <jiseshin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:52:30 by jiseshin          #+#    #+#             */
/*   Updated: 2024/11/09 22:08:13 by jiseshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (*(big + i) != '\0' && i < len)
	{
		j = 0;
		while (*(big + i + j) == *(little + j) && i + j < len)
		{
			j++;
			if (*(little + j) == '\0')
				return ((char *)(big + i));
		}
		i++;
	}
	return (0);
}
