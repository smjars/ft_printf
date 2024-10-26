/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 15:54:41 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	if (!*(s1))
		return (ft_strdup(""));
	len = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[len]) && s1[len])
		len--;
	return (ft_substr(s1, 0, len + 1));
}
