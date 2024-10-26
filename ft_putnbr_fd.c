/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 16:22:39 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	ft_putnbr_fd(int n, int fd, int *len)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		*len += 11;
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		(*len)++;
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd, len);
	ft_putchar_fd((n % 10) + '0', fd);
	(*len)++;
}
