/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:59:12 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/11 19:20:53 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_test(char *s)
{
	*s = *s - 1;
}

int		main(int argc, char **argv)
{
	void (*f)(char *);
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
	ft_striter(str, f);
	puts(str);
	return (0);
}
