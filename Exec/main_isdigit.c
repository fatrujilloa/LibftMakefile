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
#include <ctype.h>

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("%s. Provide 1 number", argv[0]);
		return (0);
	}
	printf("\n CHARACTER:  %d \n", atoi(argv[1]));
	printf("My result %d \n", ft_tolower(atoi(argv[1])));
	printf("Ststem result %d \n", tolower(atoi(argv[1])));
	return (0);
}
