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
	unsigned char c;
	
	if (argc != 2)
	{
		printf("%s. Provide 1 number", argv[0]);
		return (0);
	}
	c = atoi(argv[1]);
	printf("\n CHARACTER:  %c \n", c);
	printf("My result %d \n", ft_isalnum(atoi(argv[1])));
	printf("Ststem result %d \n", isalnum(atoi(argv[1])));
	return (0);
}
