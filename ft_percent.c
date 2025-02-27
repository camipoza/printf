/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_percent.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 19:00:22 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/27 15:15:55 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int	ft_percent(va_list args, char str)
{
	if (str == 'c')
		return (ft_putchar(va_arg(args, int)));
	if (str == 's')
		return (ft_putstr(va_arg(args, char *)));
	if (str == 'p')
		return (ft_putptr(va_arg(args, void *)));
	if (str == 'd' || str == 'i')
		return (ft_putnbr(va_arg(args, int)));
	if (str == 'u')
		return (ft_putunsign(va_arg(args, unsigned int)));
	if (str == 'x')
		return (ft_puthex(va_arg(args, unsigned int), 'x'));
	if (str == 'X')
		return (ft_puthex(va_arg(args, unsigned int), 'X'));
	if (str == '%')
		return (ft_putchar('%'));
	else
		return (ft_putchar(str));
	return (0);
}
