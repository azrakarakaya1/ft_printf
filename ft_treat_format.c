/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_treat_format.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkaraka <azkaraka@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:11:46 by azkaraka          #+#    #+#             */
/*   Updated: 2025/07/29 20:07:50 by azkaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}

int	ft_print_ptr(unsigned long a)
{
	int	count;

	if (a == 0)
		return (write(1, "(nil)", 5));
	write(1, "0x", 2);
	count = 2 + ft_print_hex(a, 'x');
	return (count);
}

int	ft_putnbr(long long int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		count += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	count += ft_putchar(n % 10 + '0');
	return (count);
}

int	ft_print_hex(unsigned long a, const char format)
{
	char	*basel;
	char	*baseu;
	int		count;

	basel = "0123456789abcdef";
	baseu = "0123456789ABCDEF";
	count = 0;
	if (a >= 16)
		count += ft_print_hex(a / 16, format);
	if (format == 'x')
		count += ft_putchar(basel[a % 16]);
	else
		count += ft_putchar(baseu[a % 16]);
	return (count);
}
