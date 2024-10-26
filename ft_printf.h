/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 15:16:36 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"

void	ft_unsigned_fd(unsigned int n, int fd, int *t);
int		ft_adress_fd(unsigned long int n, int fd, char c);
int		ft_hexa_fd(unsigned int n, int fd, char c);
void	ft_putnbr_fd(int n, int fd, int *t);
int		ft_putstr_printf_fd(char *s, int fd);
#endif
