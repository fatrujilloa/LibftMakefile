/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:16:58 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/18 18:02:57 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Write in stdout at most n bytes of the string s
*/

void	ft_putnstr(char const *s, size_t n)
{
	if (s)
		write(1, s, MIN(ft_strlen(s), n));
}
