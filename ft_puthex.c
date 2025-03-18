/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:27:00 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/03/04 19:43:58 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_puthex(size_t x, char str) // %x, %X
{
	char	*base;
	int		counter2;

	counter2 = 0;
	if (str == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (x >= 16)
		counter2 += ft_puthex(x / 16, str);
	counter2 += ft_putchar(base[x % 16]);
	if (counter2 < 0)
			return (-1);
	return (counter2);
}

/*int main()
{
	int counter2;
	int num;

	num = 255;
	counter2 = ft_puthex(num, 'x');
	printf("\n%d\n", counter2);
	printf("%x", num);
    return(0);
}*/