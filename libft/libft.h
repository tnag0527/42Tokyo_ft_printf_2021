/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnagumo <tnagumo@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 23:00:26 by tnagumo           #+#    #+#             */
/*   Updated: 2021/11/21 23:20:31 by tnagumo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int	ft_putnbr_base_u(unsigned long long nbr, char *base);
int	ft_putnbr_base_s(signed long long nbr, char *base);
int	ft_vprintf_c(va_list ap);
int	ft_vprintf_di(va_list ap);
int	ft_vprintf_p(va_list ap);
int	ft_vprintf_s(va_list ap);
int	ft_vprintf_uxX(const char *fmt, va_list ap);

#endif
