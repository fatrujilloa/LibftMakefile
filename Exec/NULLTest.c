/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 13:59:12 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/11 18:57:12 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int     main(int argc, char **argv)
{
    int ndst;
    int nsrc;
    int qty1;
    int qty2;
	char *s1;
	char *s2;
	char s3[2];

	s1 = NULL;
	s3[0] = 'a';
	s3[1] = 0;
	puts(s1);
	puts(s3);
	printf("My try\n");
	ft_strchr(s1, 65);
	printf("System\n");
	//strchr(s1, 65);	
	//printf("%d\n", memcmp(s1, s3, 2));
	//puts(s3);
	return (0);
}
