/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:59:12 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/17 14:38:51 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int ndst;
	char c;
	char*  str1;
	
	if (argc != 4)
	{
		printf("%s. Provide 1 string, 1 character (as int) and 1 number. 0 = NULL, 1 = FirstString\n", argv[0]);
		return (0);
	}
	ndst = atoi(argv[3]);
	c = atoi(argv[2]);
	str1 = (ndst == 0) ? NULL : argv[1];
	printf("\nSTRING: %s, CHAR: %c\n\n", str1, c);
	printf("Position %zu", ft_index(c, str1));
	return (0);
}
