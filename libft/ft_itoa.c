/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 15:30:03 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static	int	lennum(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while ((unsigned int)n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*p;
	long	r;

	r = n;
	len = lennum(r);
	if (r < 0)
	{
		len++;
		r = -1 * r;
	}
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	p[len] = 0;
	while (len > 0)
	{
		p[len - 1] = r % 10 + '0';
		r /= 10;
		len--;
	}
	if (n < 0)
		p[0] = '-';
	return (p);
}
