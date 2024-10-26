/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 15:54:54 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	lent;

	if (!s)
		return (NULL);
	lent = ft_strlen(s);
	if (lent <= len)
		len = lent;
	if (lent <= start)
		return (ft_strdup(""));
	p = (char *)malloc(len + 1);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s + start, len + 1);
	return (p);
}
