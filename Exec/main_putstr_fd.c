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
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int fd;

	if (argc != 3)
	{
		printf("%s. Provide 1 string and a name for a file\n", argv[0]);
		return (0);
	}
	fd = open(argv[2], O_RDWR | O_CREAT);
	printf("The fd is %d\n", fd);
	ft_putstr_fd(argv[1], fd);
	ft_putstr_fd("\n\n", fd);
	ft_putendl_fd(argv[1], fd);
	ft_putnbr_fd(atoi(argv[1]), fd);
	return (0);
}
