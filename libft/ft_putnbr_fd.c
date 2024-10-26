/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 17:22:25 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/*size_t  ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);*/
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
		*len += 1;
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd, len);
	ft_putchar_fd((n % 10) + '0', fd);
	*len += 1;
}
/*#include <stdio.h>
#include <fcntl.h>
int main() 
{
	int	fd;
	fd = open("borrar.txt", O_WRONLY | O_CREAT, 0644);
	if (fd == -1)
		return (1);	
	ft_putnbr_fd(42, fd);
	close (fd);
	return (0);
}*//*Esta funcion pasa a string el numero que recibe y lo escribe en consola o 
en un archivo, en el ejemplo un archivo*/
