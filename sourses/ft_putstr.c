/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 19:14:30 by hkimberl          #+#    #+#             */
/*   Updated: 2021/12/26 19:14:36 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr(char *str)
{
	int	total;

	total = 0;
	if (str == (void *)0)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (*str)
	{
		write(1, str++, 1);
		total += 1;
	}
	return (total);
}
