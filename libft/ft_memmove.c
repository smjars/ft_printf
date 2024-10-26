/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 15:34:22 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len;
	if (!dst && !src)
		return (NULL);
	if (!len)
		return (dst);
	if (dst > src)
	{
		while (--i)
			((char *)dst)[i] = ((char *)src)[i];
		((char *)dst)[i] = ((char *)src)[i];
	}
	else
		dst = ft_memcpy(dst, src, len);
	return (dst);
}
