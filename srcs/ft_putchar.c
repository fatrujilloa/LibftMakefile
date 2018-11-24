/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:20:23 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/10 15:21:04 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_lencharl(unsigned char c)
{
    int l;

    l = 0;
    while (c & 128)
        {
            c = c << 1;
            l++;
        }
    return (l);
}

void	ft_putchar(char c)
{
	int		i;
	int		l;

	if ((unsigned char)c < 128)
		{
			write(1, &c, 1);
			return ;
		}
	i = 0;
	l = ft_lencharl((unsigned char)c);
	write (1, &c, l);
}
