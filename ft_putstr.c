/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/16 17:08:15 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/21 14:44:32 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putstr(char *str)
{
	int	count2;

	count2 = 0;
	if (!str)
		return (write(1, "(null)", 6));
	while (*str)
	{
		count2 += ft_putchar(*str);
		str++;
	}
	return (count2);
}

/*int	main()
{
	int count2;
	count2 = ft_putstr(NULL);
	return(0);
}*/