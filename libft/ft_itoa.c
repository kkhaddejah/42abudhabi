#include "libft.h"

char	*ft_itoa(int n)
{
	char			*str;
	long			num;
	size_t			len;

	num = n;
	len = (n <= 0) ? 1 : 0;
	while (num != 0)
	{
		num /= 10;
		len++;
	}
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		num = -(long)n;
	}
	else
		num = n;
	while (num != 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}