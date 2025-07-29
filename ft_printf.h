/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azkaraka <azkaraka@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 16:43:57 by azkaraka          #+#    #+#             */
/*   Updated: 2025/07/29 20:12:17 by azkaraka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_format(va_list args, const char f_specifier);

void	ft_manage_err(void);

#endif
