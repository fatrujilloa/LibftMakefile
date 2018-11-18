/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 15:11:57 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/11 16:39:14 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	char			*cdst;
	char			*csrc;

	if (n == 0)
		return (dst);
	if (ft_memnlap_fwd(dst, src, n - 1) || ft_memnlap_fwd(src, dst, n - 1))
		abort();
	i = 0;
	uc = c;
	cdst = (char *)dst;
	csrc = (char *)src;
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
