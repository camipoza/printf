/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoza-ra <cpoza-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 16:46:26 by cpoza-ra          #+#    #+#             */
/*   Updated: 2025/02/21 14:32:07 by cpoza-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_percent(va_list arg, char str);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putptr(void *p);
int	ft_putnbr(int i);
int	ft_puthex(size_t x, char str);
int	ft_putunsign(unsigned int num);

#endif