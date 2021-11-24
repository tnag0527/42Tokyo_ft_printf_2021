/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnagumo <tnagumo@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 07:12:11 by tnagumo           #+#    #+#             */
/*   Updated: 2021/11/21 23:01:43 by tnagumo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_vprintf_p(va_list ap)
{
	unsigned long long	num;
	int					rtn;

	rtn = 0;
	num = (unsigned long long)(va_arg(ap, void *));
	write(1, "0x", 2);
	rtn += 2;
	rtn += ft_putnbr_base_u(num, "0123456789abcdef");
	return (rtn);
}
