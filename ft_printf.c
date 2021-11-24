/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnagumo <tnagumo@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:22:29 by tnagumo           #+#    #+#             */
/*   Updated: 2021/11/21 23:18:44 by tnagumo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_vprintf_conversion(const char *fmt, va_list ap)
{
	int					rtn;

	rtn = 0;
	if (*fmt == 'c')
		rtn += ft_vprintf_c(ap);
	if (*fmt == 's')
		rtn += ft_vprintf_s(ap);
	if (*fmt == 'p')
		rtn += ft_vprintf_p(ap);
	if ((*fmt == 'd') || (*fmt == 'i'))
		rtn += ft_vprintf_di(ap);
	if ((*fmt == 'u') || (*fmt == 'x') || (*fmt == 'X'))
		rtn += ft_vprintf_uxX(fmt, ap);
	if (*fmt == '%')
	{
		write(1, "%", 1);
		rtn++;
	}
	return (rtn);
}

static int	ft_vprintf(const char *fmt, va_list ap)
{
	int	rtn;

	rtn = 0;
	while (*fmt)
	{
		if (*fmt != '%')
		{
			write(1, fmt++, 1);
			rtn++;
			continue ;
		}
		++fmt;
		rtn += ft_vprintf_conversion(fmt, ap);
		++fmt;
	}
	return (rtn);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		rtn;

	va_start(ap, fmt);
	rtn = ft_vprintf(fmt, ap);
	va_end(ap);
	return (rtn);
}
