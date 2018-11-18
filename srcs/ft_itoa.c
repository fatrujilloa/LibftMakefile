/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 17:16:07 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/18 17:52:02 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	nb;
	char	*p;
	char	sgn;
	int		i;

	if (!(p = (char*)malloc(12)))
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
