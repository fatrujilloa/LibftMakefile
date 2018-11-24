/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:59:12 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/18 20:47:28 by ftrujill         ###   ########.fr       */
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
		printf("%s. Provide 4 strings & 4 numbers = pos.dst, pos.src, character to search, numbers of bytes to copy.\n", argv[0]);
		return (0);
	}
	ndst = atoi(argv[5]);
	nsrc = atoi(argv[6]);
	qty1 = atoi(argv[7]);
	qty2 = atoi(argv[8]);
	printf("\nDESTINATION: %s, SOURCE: %s, CHARACTER: %c, NUMBER OF BYTES: %d\n\n", argv[ndst], argv[nsrc], qty1, qty2);
	if (qty2 > 0)
		printf("OVERLAP? %zu\n\n", ft_memnlap_fwd(argv[ndst], argv[nsrc], qty2 - 1) + ft_memnlap_fwd(argv[nsrc], argv[ndst], qty2 - 1));
	ft_memccpy(argv[ndst], argv[nsrc], qty1, qty2);
	printf("MODIFIED DESTINATION: %s\n\n", argv[ndst]);
	ft_putstr("ALL PARAMETERS: \n");
	ft_print_params(argc, argv);
	return (0);
}
