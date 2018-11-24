#include "libft.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	char *src;
	char *dst;
	//char *r;

	argc = 0;
	dst = argv[1];
	//src = argv[3];
	puts (dst);
	//puts (src);
	//ft_strncpy(dst, src, atoi(argv[4]));
	//printf("%zu\n", ft_memnlap_fwd(dst,src, ft_strlen(dst) + ft_strlen(src)));
	//printf("%zu\n", ft_memnlap_fwd(dst, src, atoi(argv[4]) - ft_strlen(dst) - 1));
	//r = ft_strncat(dst, src, atoi(argv[4]));
	//printf("%zu\n", strlcat(dst, src, atoi(argv[4])));
	//printf("%zu\n", ft_strlen(argv[1]));
	src = ft_strrchr(dst, '\0');
	puts (src);
	//puts (argv[2]);
	//puts (argv[3]);
}
