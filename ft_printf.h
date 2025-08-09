/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkaraka <azkaraka@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:43:57 by azkaraka          #+#    #+#             */
/*   Updated: 2025/08/10 01:04:30 by azkaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_format(va_list args, const char f_specifier);
int	ft_putchar(char c);
int	ft_print_str(char *str);
int	ft_print_ptr(unsigned long a);
int	ft_putnbr(long long int n);
int	ft_print_hex(unsigned long a, const char format);
int	ft_manage_err(void);

#endif
