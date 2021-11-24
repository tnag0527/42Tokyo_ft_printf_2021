/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf_di.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnagumo <tnagumo@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 23:13:35 by tnagumo           #+#    #+#             */
/*   Updated: 2021/11/21 23:39:18 by tnagumo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_vprintf_di(va_list ap)
{
	int					rtn;
	signed long long	num;

	num = (signed long long)va_arg(ap, int);
	rtn = ft_putnbr_base_s(num, "0123456789");
	return (rtn);
}
