/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:59:12 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/11 19:49:39 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int ndst;
	char *str1;
	
	if (argc != 3)
	{
		printf("%s. Provide 1 string & 1 numbers. 0 = NULL, 1 = FirstString", argv[0]);
		return (0);
	}
	ndst = atoi(argv[2]);
	str1 = (ndst == 0) ? NULL : argv[ndst];
	printf("\nSTRING  %s \n", str1);
	printf("My result %d \n", ft_atoi(str1));
	printf("Sy result %d \n", atoi(str1));
	return (0);
}
