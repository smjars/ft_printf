/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 16:04:41 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	ft_hexa_fd(unsigned long num, int fd, char specifier)
{
	char	*base;
	char	buffer[16];
	int		i;
	int		len;

	if (specifier == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	i = 0;
	if (num == 0)
		buffer[i++] = '0';
	else
	{
		while (num)
		{
			buffer[i++] = base[num % 16];
			num /= 16;
		}
	}
	len = i;
	while (i--)
		write(fd, &buffer[i], 1);
	return (len);
}
