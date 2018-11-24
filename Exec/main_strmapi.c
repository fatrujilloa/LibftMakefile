/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:59:12 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/17 16:05:56 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	ft_test(unsigned int i, char c)
{
	return (c + i);
}

int		main(int argc, char **argv)
{
	char (*f)(unsigned int, char);
	int	nstr;
	char *str;

	if (argc != 3)
		{
		printf("Introduce a string and a number. 0 for NULL, 1 for string");
		return (0);
		}
	nstr = atoi(argv[2]);
	if (nstr == 0)
		str = NULL;
	else
		str = argv[1];
	f = &ft_test;
	puts(str);
	puts(ft_strmapi(str, f));
	puts(str);
	return (0);
}
