/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkaraka <azkaraka@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:43:44 by azkaraka          #+#    #+#             */
/*   Updated: 2025/07/29 20:10:52 by azkaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		ret;
	int		tmp;

	ret = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%' && *(format + 1))
		{
			tmp = ft_format(args, *(++format));
			if (tmp < 0)
				ft_manage_err();
			ret += tmp;
		}
		else if (*format != '%')
			ret += write(1, format, 1);
		else
			ft_manage_err();
		format++;
	}
	va_end(args);
	return (ret);
}
