/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsign.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 18:18:31 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/03/04 18:36:13 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int	ft_putunsign(unsigned int num)//%u
{
	int	counter2;

	counter2 = 0;
	if (num >= 10)
	{
		counter2 += ft_putunsign(num / 10);
		counter2 += ft_putunsign(num % 10);
	}
	else
	{
		ft_putchar((num + '0'));
		counter2++;
	}
	return (counter2);
}

/*int main ()
{
	int counter2;
	int num = 'NULL';

	counter2 = ft_putunsign(num);
	printf("\n len: %d\n", counter2);
	printf("%u", num);
    return(0);
}*/