/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 17:58:18 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/18 17:58:54 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strinv(char *str)
{
	size_t	len;
	size_t	i;
	char	c;

	if (!str)
		return ;
	len = ft_strlen(str);
	i = 0;
	while (i < len / 2)
	{
		c = str[len - 1 - i];
		str[len - 1 - i] = str[i];
		str[i++] = c;
	}
}
