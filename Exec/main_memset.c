/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:59:12 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/18 17:47:58 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int ndst;
	int nsrc;
	int qty1;
	int qty2;

	if (argc != 9)
	{
		printf("%s. Provide 4 strings & 4 numbers = pos.dst, pos.src, quantity1, quantity2.\n", argv[0]);
		return (0);
	}
	ndst = atoi(argv[5]);
	nsrc = atoi(argv[6]);
	qty1 = atoi(argv[7]);
	qty2 = atoi(argv[8]);
	printf("QUANTITIES: %d, %d\n", qty1, qty2);
	printf("DESTINATION: ");
	puts (argv[ndst]);
	printf("SOURCE: ");
	puts (argv[nsrc]);
	ft_memset(argv[ndst], qty1, qty2);
	ft_putstr("ALL PARAMETERS: \n");
	ft_print_params(argc, argv);
	return (0);
}
