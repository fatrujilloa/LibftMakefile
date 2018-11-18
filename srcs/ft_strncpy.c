/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 21:24:12 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/10 21:54:01 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t	i;
	size_t	min;

	i = 0;
	if (!(min = ft_min_positive(ft_strlen(src), len)))
		return (dst);
	if (ft_memnlap_fwd(dst, src, min))
		return (dst);
	while (i < min)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = 0;
	return (dst);
}
