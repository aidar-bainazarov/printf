/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_itoa.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 19:13:33 by hkimberl          #+#    #+#             */
/*   Updated: 2021/12/26 19:13:42 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static char	*ft_unsigned_itoa(unsigned int n)
{
	char	*loc;
	long	m;
	size_t	len;

	m = n;
	len = ft_get_len(m);
	if (m < 0)
		m *= -1;
	loc = (char *)malloc(len + 1);
	if (loc == (void *)0)
		return ((void *)0);
	loc[len] = 0;
	while (len)
	{
		loc[len - 1] = (m % 10) + '0';
		m /= 10;
		len--;
	}
	if (n < 0)
		*loc = '-';
	return (loc);
}

int	ft_print_unsigned_itoa(unsigned int n)
{
	char	*str;
	int		counter;

	counter = 0;
	str = ft_unsigned_itoa(n);
	while (str[counter])
	{
		write(1, &str[counter], 1);
		counter++;
	}
	free(str);
	return (counter);
}
