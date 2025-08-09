/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkaraka <azkaraka@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:43:27 by azkaraka          #+#    #+#             */
/*   Updated: 2025/07/29 20:03:22 by azkaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, const char format)
{
	int	ret;

	ret = 0;
	if (format == 'c')
		ret = ft_putchar(va_arg(args, int));
	else if (format == 's')
		ret = ft_print_str(va_arg(args, char *));
	else if (format == 'p')
		ret = ft_print_ptr((unsigned long)va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		ret = ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		ret = ft_putnbr(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		ret = ft_print_hex(va_arg(args, unsigned int), format);
	else if (format == '%')
		ret = write(1, "%", 1);
	else
		ret = ft_manage_err();
	return (ret);
}
