/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnagumo <tnagumo@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/27 10:18:47 by tnagumo           #+#    #+#             */
/*   Updated: 2021/11/21 23:09:18 by tnagumo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	full(unsigned long long a, char *base, long l)
{
	unsigned long long	d;
	unsigned long long	m;
	int					rtn;

	rtn = 0;
	d = (unsigned long long)(a / l);
	m = (unsigned long long)(a % l);
	if (d > 0)
		rtn += full(d, base, l);
	write(1, &base[m], 1);
	rtn += 1;
	return (rtn);
}

static int	fsll(signed long long a, char *base, long l)
{
	signed long long	d;
	signed long long	m;
	int					rtn;

	rtn = 0;
	if ((signed long long)a < 0)
	{
		write(1, "-", 1);
		a = -(signed long long)a;
		rtn += 1;
	}
	d = (signed long long)(a / l);
	m = (signed long long)(a % l);
	if (d > 0)
		rtn += fsll(d, base, l);
	write(1, &base[m], 1);
	rtn += 1;
	return (rtn);
}

static int	check_base(char *base)
{
	int	i;
	int	j;

	if ((base[0] == '\0') || (base[1] == '\0'))
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if ((base[i] == '+') || (base[i] == '-'))
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_putnbr_base_u(unsigned long long nbr, char *base)
{
	long	l;

	if (check_base(base))
		return (0);
	l = 0;
	while (base[l] != '\0')
		l++;
	return (full(nbr, base, l));
}

int	ft_putnbr_base_s(signed long long nbr, char *base)
{
	long	l;

	if (check_base(base))
		return (0);
	l = 0;
	while (base[l] != '\0')
		l++;
	return (fsll(nbr, base, l));
}
