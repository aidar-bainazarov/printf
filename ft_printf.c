/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 19:05:56 by hkimberl          #+#    #+#             */
/*   Updated: 2021/12/27 20:51:23 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_percent(va_list ap, const char *str)
{
	int	total;

	total = 0;
	if (*str == 'c')
		total = ft_putchr(va_arg(ap, int));
	else if (*str == 's')
		total = ft_putstr(va_arg(ap, char *));
	else if (*str == '%')
		total = ft_print_percent();
	else if (*str == 'i' || *str == 'd')
		total = ft_print_itoa(va_arg(ap, long));
	else if (*str == 'u')
		total = ft_print_unsigned_itoa(va_arg(ap, long));
	else if (*str == 'p')
		total = ft_print_pointer(va_arg(ap, long unsigned int));
	else if (*str == 'x')
		total = ft_print_hex(va_arg(ap, long unsigned int), 1);
	else if (*str == 'X')
		total = ft_print_hex(va_arg(ap, long unsigned int), 0);
	return (total - 1);
}

int	check_char(const char *n)
{
	if (*n == 'c' || *n == 's')
		return (1);
	else if (*n == '%' || *n == 'i')
		return (1);
	else if (*n == 'd' || *n == 'u')
		return (1);
	else if (*n == 'p' || *n == 'x')
		return (1);
	else if (*n == 'X')
		return (1);
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		total;

	va_start(ap, str);
	total = 0;
	while (*str)
	{
		if (*str == '%')
		{
			total += ft_percent(ap, ++str);
		}
		else
			write(1, str, 1);
		str++;
		total += 1;
	}
	va_end(ap);
	return (total);
}
