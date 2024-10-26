/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 16:26:35 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_fd(unsigned int n, int fd, int *len)
{
	if (n >= 10)
		ft_unsigned_fd(n / 10, fd, len);
	ft_putchar_fd((n % 10) + '0', fd);
	(*len)++;
}
