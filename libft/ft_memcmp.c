# include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
			return (ptr1[i] - ptr2[i]);
		i++;
	}
	return (0);
}

// memcmp compares the first n bytes of the memory areas s1 and s2.
// It returns an integer less than, equal to, or greater than zero if the first n bytes of s1 is found,
// respectively, to be less than, to match, or be greater than the first n bytes of s2.
// If n is zero, the return value is zero.
// The function works by iterating through each byte of the two memory areas and comparing them one by one.
// If a difference is found, it returns the difference between the two differing bytes.
// If no differences are found after comparing n bytes, it returns zero.
// Pointer casting is used to treat the void pointers as unsigned char pointers for byte-wise comparison.
// A pointer is a variable that stores the memory address of another variable.