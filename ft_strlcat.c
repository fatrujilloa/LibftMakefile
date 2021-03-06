/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:10:52 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/24 14:58:21 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	l1;
	size_t	l2;
	size_t	s;

	l1 = ft_strlen(dst);
	l2 = ft_strlen(src);
	s = l2 + MIN(l1, size);
	if (size <= l1)
		return (s);
	ft_strncat(dst, src, size - l1 - 1);
	return (s);
}
