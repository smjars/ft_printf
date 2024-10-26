/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 15:27:21 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || \
	c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int					sign;
	unsigned long long	result;

	sign = 1;
	result = 0;
	while (ft_isspace((char)*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while ((char)ft_isdigit(*str))
	{
		result = (result * 10) + (*str++ - '0');
		if (9223372036854775807 < result)
		{
			if (sign > 0)
				return (-1);
			else
				return (0);
		}
	}
	return (result * sign);
}
