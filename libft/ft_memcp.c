# include "libft.h"

void ft_memcpy(void *dest, void *src, int n)
{
	if (dest == NULL) return NULL;

	char *char_dest = (char *)dest;
	char *char_src = (char *)src;

	for (int i = 0; i < n; i++)
		char_dest[i] = char_src[i];
}

int main() {
	char src[] = "Hello, World!";
	char dest[20];

	ft_memcpy(dest, src, 13);
	dest[13] = '\0'; // Null-terminate the destination string

	write(1, dest, 13); // Output: Hello, World!
	write(1, "\n", 1);
	write(1, src, 13);  // Output: Hello, World!

	return 0;
}