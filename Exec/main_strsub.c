
#include "libft.h"
#include <stdio.h>


int		main(int argc, char** argv)
{
	char *str;
	char *ptr;

	if (argc != 5)
		{
			printf("%s. Type 1 string, 1 number: 0 = NULL, 1 = String, 2 more numbers:  pos. start, lenght of truncation", argv[0]);
			return (0);
		}
	str = (atoi(argv[2]) == 0) ? NULL : argv[1];
	ptr = ft_strsub(str, atoi(argv[3]), atoi(argv[4]));
	puts (ptr);
	return (0);
}
