/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:11:57 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/18 21:03:11 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	size_t			overlap;
	unsigned char	uc;
	unsigned char	*cdst;
	unsigned char	*csrc;

	if (n == 0)
		return (dst);
	uc = (unsigned char)c;
    cdst = (unsigned char*)dst;
    csrc = (unsigned char*)src;
	i = ft_index_uc(uc, csrc);
	overlap = i < ft_strlen(src) ? i : n - 1;
	if (ft_memnlap_fwd(dst, src, i) || ft_memnlap_fwd(src, dst, i))
		abort();
	i = 0;
	while (i < n)
	{
		cdst[i] = csrc[i];
		dst++;
		if (csrc[i] == uc)
			return (dst);
		else
			i++;
	}
	return (NULL);
}
