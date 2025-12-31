#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	word_count;
	char	**result;

	if (s == NULL)
		return (NULL);
	word_count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			word_count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	return (result);
}