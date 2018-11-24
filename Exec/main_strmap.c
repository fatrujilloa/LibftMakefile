/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:59:12 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/17 15:44:09 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	ft_test(char c)
{
	return (c + 1);
}

int		main(int argc, char **argv)
{
	char (*f)(char);
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
	puts(ft_strmap(str, f));
	return (0);
}
