/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jruiz-sa <jruiz-sa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:17:47 by jruiz-sa          #+#    #+#             */
/*   Updated: 2024/10/26 16:20:13 by jruiz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// Helper function to handle pointer specifier
static int	handle_pointer(void *ptr)
{
	int	len;

	len = 0;
	if (ptr == NULL)
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	else
	{
		ft_putstr_fd("0x", 1);
		len += 2;
		len += ft_adress_fd((unsigned long)ptr, 1, 'x');
		return (len);
	}
}

// Helper function to handle different format specifiers
static int	litters(va_list *a, const char *s, int i)
{
	int	t;

	t = 0;
	if (s[i + 1] == 'c')
		t = ft_putchar_fd(va_arg(*a, int), 1);
	else if (s[i + 1] == 's')
		t = ft_putstr_printf_fd(va_arg(*a, char *), 1);
	else if (s[i + 1] == '%')
		t = ft_putchar_fd('%', 1);
	else if (s[i + 1] == 'd' || s[i + 1] == 'i')
		ft_putnbr_fd(va_arg(*a, int), 1, &t);
	else if (s[i + 1] == 'u')
		ft_unsigned_fd(va_arg(*a, unsigned int), 1, &t);
	else if (s[i + 1] == 'x' || s[i + 1] == 'X')
		t = ft_hexa_fd(va_arg(*a, long), 1, s[i + 1]);
	else if (s[i + 1] == 'p')
		t = handle_pointer(va_arg(*a, void *));
	else
		t = ft_putchar_fd(s[i + 1], 1);
	return (t);
}

// Main ft_printf function
int	ft_printf(const char *s, ...)
{
	int		i;
	int		t;
	va_list	a;

	t = 0;
	i = -1;
	va_start(a, s);
	while (s[++i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			t += litters(&a, s, i);
			i++;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			t++;
		}
	}
	va_end(a);
	return (t);
}
