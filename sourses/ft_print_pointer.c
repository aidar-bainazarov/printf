/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 19:13:06 by hkimberl          #+#    #+#             */
/*   Updated: 2021/12/26 19:13:10 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_print_pointer(uintptr_t dec)
{
	char	*str;
	int		total;

	write(1, "0x", 2);
	if (!dec)
	{
		write(1, "0", 1);
		return (3);
	}
	str = ft_get_point(dec);
	total = ft_putstr(str);
	free(str);
	return (total + 2);
}
