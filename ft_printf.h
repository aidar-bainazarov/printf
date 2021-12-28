/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkimberl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/26 19:07:55 by hkimberl          #+#    #+#             */
/*   Updated: 2021/12/27 21:48:40 by hkimberl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_print_percent(void);
char	*ft_get_point(uintptr_t dec);
int		ft_print_pointer(uintptr_t dec);
int		ft_print_hex(unsigned int count, int format);
int		ft_putchr(int c);
int		ft_putstr(char *str);
size_t	ft_get_len(long n);
int		ft_print_itoa(int n);
int		ft_print_unsigned_itoa(unsigned int n);
int		ft_printf(const char *str, ...);

#endif
