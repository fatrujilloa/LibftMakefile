/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:59:12 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/17 18:10:09 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int ndst;
	//char*  str1;

	if (argc != 2)
	{
		printf("%s. Provide 1 integer.\n", argv[0]);
		return (0);
	}
	ndst = atoi(argv[1]);
	ft_putnbr(ndst);
	return (0);
}
