/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:59:12 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/17 18:46:44 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int ndst;
	char*  str1;
	char c;

	if (argc != 4)
	{
		printf("%s. Provide 1 string, 1 character (as an int) and  1 number: 0 = NULL, 1 = FirstString\n", argv[0]);
		return (0);
	}
	ndst = atoi(argv[3]);
	str1 = (ndst == 0) ? NULL : argv[ndst];
	c = atoi(argv[2]);
	printf("STRING: %s, CHARACTER: %c \n\n", str1, c);
	ft_print_tab(ft_strsplit(str1, c));
	return (0);
}
