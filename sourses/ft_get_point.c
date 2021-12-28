/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_point.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 19:10:46 by hkimberl          #+#    #+#             */
/*   Updated: 2021/12/27 20:38:28 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	get_len(uintptr_t dec)
{
	uintptr_t	m;
	int			len;

	len = 0;
	m = (uintptr_t)dec;
	while (m != 0)
	{
		m = m / 16;
		len++;
	}
	return (len);
}

static void	fin(char *loc, uintptr_t count, int kek)
{
	uintptr_t	delitel;

	while (kek > -1)
	{
		delitel = count / 16;
		if ((count - (delitel * 16)) <= 9)
		{
			loc[kek] = (count - (delitel * 16)) + 48;
		}
		else
		{
			loc[kek] = (count - (delitel * 16)) + 87;
		}
		kek--;
		count = delitel;
	}
}

char	*ft_get_point(uintptr_t dec)
{
	uintptr_t	hex;
	int			len;
	char		*loc;

	hex = (uintptr_t)dec;
	len = get_len(hex);
	loc = (char *)malloc(len + 1);
	loc[len] = 0;
	fin(loc, hex, len - 1);
	return (loc);
}
