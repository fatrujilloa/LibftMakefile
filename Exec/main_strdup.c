/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 13:42:43 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/18 13:50:12 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int argc, char** argv)
{
	char *str;
	char *ptr;
	int	ndest;

	if (argc != 3)
		{
			printf("%s. Type a string and a number: 0 = NULL, 1 = String.", argv[0]);
			return (0);
		}
	ndest = atoi(argv[2]);
	ptr = ndest == 0 ? NULL : argv[1];
	puts(ptr);
	str = strdup(ptr);
	puts(str);
	printf("Now Clearing \n");
	ft_strclr(str);
	puts(str);
	return (0);
}
