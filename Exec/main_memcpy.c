/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:59:12 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/11 14:42:41 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int ndst;
	int nsrc;
	int nbyt;

	if (argc != 8)
	{
		printf("%s. Provide 4 strings. 2 numbers between 1-4 to select destination and source. The number of bytes to copy.\n", argv[0]);
		return (0);
	}
	ndst = atoi(argv[5]);
	nsrc = atoi(argv[6]);
	nbyt = atoi(argv[7]);
	memcpy(argv[ndst], argv[nsrc], nbyt);
	printf("BYTES TO COPY: %d\n", nbyt);
	printf("DESTINATION: ");
	puts (argv[ndst]);
	printf("SOURCE: ");
	puts (argv[nsrc]);
	ft_putstr("ALL PARAMETERS: \n");
	ft_print_params(argc, argv);
	return (0);
}
