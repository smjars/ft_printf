/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adress_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 17:17:51 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static int	convert_atos(unsigned long long addr, char *buffer, char *base)
{
	int	i;

	i = 0;
	if (addr == 0)
		buffer[i++] = '0';
	else
	{
		while (addr)
		{
			buffer[i++] = base[addr % 16];
			addr /= 16;
		}
	}
	return (i);
}

int	ft_adress_fd(unsigned long long addr, int fd, char specifier)
{
	char	*base;
	char	buffer[16];
	int		len;
	int		i;

	if (specifier == 'x')
		base = "0123456789abcdef";
	else if (specifier == 'X')
		base = "0123456789ABCDEF";
	else
		return (-1);
	len = convert_atos(addr, buffer, base);
	i = len;
	while (i--)
		write(fd, &buffer[i], 1);
	return (len);
}
/*
int	ft_adress_fd(unsigned long long addr, int fd, char specifier)
{
	char	*base;
	char	buffer[16];
	int		i;
	int		len;

	if (specifier == 'x')
		base = "0123456789abcdef";
	else if (specifier == 'X')
		base = "0123456789ABCDEF";
	else
		return (-1);
	i = 0;
	if (addr == 0)
		buffer[i++] = '0';
	else
	{
		while (addr)
		{
			buffer[i++] = base[addr % 16];
			addr /= 16;
		}
	}
	len = i;
	while (i--)
		write(fd, &buffer[i], 1);
	return (len);
}*/
