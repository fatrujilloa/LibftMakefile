/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 14:34:15 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/24 18:44:05 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_size_itoa(int n)
{
	int i;

	i = n <= 0 ? 2 : 1;
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	long	nb;
	char	*p;
	char	sgn;
	int		i;

	if (!(p = (char*)malloc(ft_size_itoa(n))))
		return (NULL);
	nb = n;
	sgn = nb < 0 ? 1 : 0;
	nb = nb < 0 ? -nb : nb;
	p[0] = '0' + nb % 10;
	i = 1;
	while (nb > 9)
	{
		nb = nb / 10;
		p[i++] = '0' + nb % 10;
	}
	if (sgn)
		p[i++] = '-';
	p[i] = 0;
	ft_strinv(p);
	return (p);
}
