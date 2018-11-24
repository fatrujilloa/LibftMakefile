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
	char *dst;
	char *src;
	int qty1;
	int qty2;

	if (argc != 9)
	{
		printf("%s. Provide 4 strings & 3 numbers = pos.dst (0 for NULL), pos.src (0 for NULL), numbers of bytes to copy.\n", argv[0]);
		return (0);
	}
	ndst = atoi(argv[5]);
	nsrc = atoi(argv[6]);
	dst  = ndst ? argv[ndst] : NULL;
    src  = nsrc? argv[nsrc] : NULL;
	qty1 = atoi(argv[7]);
	printf("\nDESTINATION: %s, SOURCE: %s, NUMBER OF BYTES: %d\n\n", dst, src, qty1);
	if (qty1 > 0)
		printf("OVERLAP? %zu\n\n", ft_memnlap_fwd(dst, src, qty1 - 1) + ft_memnlap_fwd(argv[nsrc], argv[ndst], qty2 - 1));
	ft_memccpy(argv[ndst], argv[nsrc], qty1, qty2);
	printf("MODIFIED DESTINATION: %s\n\n", argv[ndst]);
	ft_putstr("ALL PARAMETERS: \n");
	ft_print_params(argc, argv);
	return (0);
}
