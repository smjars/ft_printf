/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 15:54:33 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	t;
	size_t	j;

	i = -1;
	t = 0;
	j = 0;
	while (s[++i])
	{
		if (s[i] == (char)c)
		{
			t = i;
			j = 1;
		}
	}
	if (!c)
		return ((char *)(s + i));
	if (!j)
		return (NULL);
	return ((char *)(s + t));
}
