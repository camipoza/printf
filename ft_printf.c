/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:54:21 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/27 15:32:58 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(char const *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			count += ft_percent(args, *str);
		}
		else
			count += ft_putchar(*str);
		if (*str)
			str++;
	}
	va_end(args);
	return (count);
}
/*int main()
{
	int n = -123456;
	char c = 'a';
	char *s = NULL;
	
	ft_printf("%c %s %p %i %d %u %x %X", c, s, s, n, n, n, n, n);
	printf("\n%c %s %p %i %d %u %x %X", c, s, s, n, n, n, n, n);
	return(0);
}*/
