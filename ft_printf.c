/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 16:54:21 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/03/04 19:49:38 by cpoza-ra         ###   ########.fr       */
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
	
	char c = 'a';
	char *s = NULL;
	char n = "5462";
	
	printf("%d\n",ft_printf("%s", p));
	return(0);
}*/
