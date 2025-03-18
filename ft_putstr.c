/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:08:15 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/03/04 19:44:16 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putstr(char *str)
{
	int	counter2;

	counter2 = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
	{
		counter2 += ft_putchar(*str);
		if (counter2 < 0)
			return (-1);
		str++;
	}
	return (counter2);
}

/*int	main()
{
	int count2;
	count2 = ft_putstr(NULL);
	return(0);
}*/