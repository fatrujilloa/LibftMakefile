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

int		main(int argc, char **argv)
{
	int ndst;
	int nsrc;
	char*  str1;
	char*  str2;

	if (argc != 5)
	{
		printf("%s. Provide 2 strings & 2 numbers. 0 = NULL, 1 = FirstString, 2 = SecondString\n", argv[0]);
		return (0);
	}
	ndst = atoi(argv[3]);
	nsrc = atoi(argv[4]);
	str1 = (ndst == 0) ? NULL : argv[ndst];
	str2 = (nsrc == 0) ? NULL : argv[nsrc];
	printf("\nDESTINATION: %s, SOURCE: %s\n\n", str1, str2);
	printf("%d\n", strcmp(str1,str2));
	return (0);
}
