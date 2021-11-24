/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf_uxX.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnagumo <tnagumo@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:16:07 by tnagumo           #+#    #+#             */
/*   Updated: 2021/11/21 23:17:31 by tnagumo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_vprintf_uxX(const char *fmt, va_list ap)
{
	int					rtn;
	unsigned long long	num;
	char				*base;

	base = "";
	if (*fmt == 'u')
		base = "0123456789";
	if (*fmt == 'x')
		base = "0123456789abcdef";
	if (*fmt == 'X')
		base = "0123456789ABCDEF";
	num = (unsigned long long)va_arg(ap, unsigned int);
	rtn = ft_putnbr_base_u(num, base);
	return (rtn);
}
