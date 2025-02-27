/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:51:54 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/20 19:27:21 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int	ft_putnbr(int num)//%i %d
{
	int	counter2;

	counter2 = 0;
	if (num == -2147483648)
		return (write(1, "-2147483648", 11));
	if (num < 0)
	{
		ft_putchar('-');
		num = -num;
		counter2 = 1;
	}
	if (num >= 10)
	{
		counter2 += ft_putnbr(num / 10);
		counter2 += ft_putnbr(num % 10);
	}
	else
	{
		ft_putchar((num + '0'));
		counter2++;
	}
	return (counter2);
}

/*int main()
{
	int num;
	int counter2;
	
	counter2 = ft_putnbr(1234);
	printf("\n len: %d\n", counter2);
	return(0);
}*/