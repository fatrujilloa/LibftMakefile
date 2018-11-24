/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 13:42:43 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/18 13:42:50 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		main(int argc, char** argv)
{
	char *str;
	char *ptr;
	int i;

	if (argc != 2)
		{
			printf("%s. Type a number", argv[0]);
			return (0);
		}
	str = ft_strnew(atoi(argv[1]));
	i = 0;
	ptr = NULL;
	while (i < atoi(argv[1]))
		{
			str[i] = '0' + i;
			i++;
		}
	ft_strclr(ptr);
	puts (str);
	printf("Now clearing\n");
	ft_strclr(str);
	i = 0;
	printf("Now printing\n");
	while (i < atoi(argv[1]))
		putchar(str[i++]);
	printf("Now freeing\n");
	ft_strdel(&str);
	return (0);
}
