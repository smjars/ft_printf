/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 15:54:20 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && *needle && i < len)
	{
		if (haystack[i] == needle[j] && needle[j])
		{
			while (needle[j] && needle[j] == haystack[i + j] \
				&& i + j < len)
				j++;
			if (!needle[j])
				return ((char *)(haystack + i));
			j = 0;
		}
		i++;
	}
	return (0);
}
