/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnagumo <tnagumo@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 07:06:29 by tnagumo           #+#    #+#             */
/*   Updated: 2021/11/21 07:07:54 by tnagumo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_vprintf_s(va_list ap)
{
	int		i;
	char	*s;

	i = 0;
	s = va_arg(ap, char *);
	if (!s)
		s = "(null)";
	while (s[i] != '\0')
		i++;
	if (i > 0)
		write(1, s, i);
	return (i);
}
