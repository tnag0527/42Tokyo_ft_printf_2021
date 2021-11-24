/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnagumo <tnagumo@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/18 09:22:29 by tnagumo           #+#    #+#             */
/*   Updated: 2021/11/21 23:42:08 by tnagumo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

static int	ft_vprintf_conversion(const char *fmt, va_list ap);
static int	ft_vprintf(const char *fmt, va_list ap);
int			ft_printf(const char *fmt, ...);

#endif
