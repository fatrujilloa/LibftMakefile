/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 22:34:18 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/11 14:58:45 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n_len;
	size_t	i;

	n_len = ft_strlen(needle);
	i = 0;
	while (*haystack && i < len - n_len + 1)
	{
		if (ft_strncmp(haystack, needle, n_len) == 0)
			return ((char*)haystack);
		haystack++;
		i++;
	}
	return (NULL);
}
