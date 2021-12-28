/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 19:11:27 by hkimberl          #+#    #+#             */
/*   Updated: 2021/12/26 19:11:34 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}

int	ft_print_hex(unsigned int count, int format)
{
	char	*answr;
	int		counter;
	int		big;

	if (count == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	counter = 0;
	answr = ft_get_point(count);
	while (answr[counter])
	{
		if (format == 0)
		{
			big = ft_toupper(answr[counter]);
			write(1, &big, 1);
		}
		else
			write(1, &answr[counter], 1);
		counter++;
	}
	free(answr);
	return (counter);
}
