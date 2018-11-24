
#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int		main(int argc, char** argv)
{
	char *str;
	void *vstr;
	void **ptr;
	void **ptrnull;

	if (argc != 2)
		{
			printf("%s. Type a number", argv[0]);
			return (0);
		}
	str = (char*)malloc(atoi(argv[1]));
	ptrnull = NULL;
	ft_memdel(ptrnull);
	vstr = (void*)str;
	ptr = &vstr;
	ft_memdel(ptr);
	ptr = vstr;
	ft_memdel(ptr);
	
	return (0);
}
