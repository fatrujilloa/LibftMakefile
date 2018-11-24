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

int		ft_lenchar(unsigned char c)
{
	int i;

	i = 0;
	while (c & 128)
        {
            c = c << 1;
            i++;
        }
	return (i);
}

int		main(int argc, char **argv)
{
	unsigned char p[] = {225, 136, 180};

	if (argc != 2)
	{
		printf("%s. Provide 1 string.\n", argv[0]);
		return (0);
	}
	printf("%d", ft_lenchar((unsigned char)atoi(argv[1])));
	write(1, p, 3);
	/* c = 225;
	write(1, &c, 1);
    c = 136;
    write(1, &c, 1);
    c = 180;
    write(1, &c, 1);*/
//ft_putchar((unsigned char)atoi(argv[1]));
	//ft_putstr(argv[1]);
	//ft_putendl(NULL);
	//ft_putendl(argv[1]);
	return (0);
}
