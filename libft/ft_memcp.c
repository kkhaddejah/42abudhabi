# include "libft.h"

void ft_memcpy(void *dest, void *src, int n)
{
	if (dest == NULL) return NULL;

	char *char_dest = (char *)dest;
	char *char_src = (char *)src;

	for (int i = 0; i < n; i++)
		char_dest[i] = char_src[i];

	return dest;
}