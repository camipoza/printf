/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 15:59:06 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/21 15:16:30 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <unistd.h>

int	ft_putptr(void *p)
{
	int	counter2;

	if (!p)
		return (write(1, "(nil)", 5));
	counter2 = 0;
	counter2 = ft_putstr("0x");
	counter2 += ft_puthex((size_t)p, 'x');
	return (counter2);
}
/*int main()
{
	void *p;
	int counter2;

	p = NULL;
	counter2 = ft_putptr(p);
	printf("\nlen: %d\n", counter2);
	printf("%p",p);
	return(0);
}*/