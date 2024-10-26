/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 15:53:36 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;
	int				len;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	i = -1;
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	while (s[++i])
		p[i] = f(i, s[i]);
	p[i] = 0;
	return (p);
}
