/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 15:52:48 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	lens;
	size_t	lenf;

	if (!s1 || !s2)
		return (NULL);
	lens = ft_strlen(s2);
	lenf = ft_strlen(s1);
	p = (char *)malloc(lenf + lens + 1);
	if (!p)
		return (NULL);
	ft_strlcpy(p, s1, lenf + 1);
	ft_strlcat(p, s2, lenf + lens + 1);
	return (p);
}
