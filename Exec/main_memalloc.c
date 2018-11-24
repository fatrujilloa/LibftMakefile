
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char** argv)
{
	void *ptr;
	void *null;
	char *str;

	if (argc != 2)
		{
			printf("%s. Type a number", argv[0]);
			return (0);
		}
	str = (char*)NULL;
	ptr = ft_memalloc(atoi(argv[1]));
	null = ft_memalloc(0);
	return (0);
}
