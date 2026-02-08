#include "libft.h"
#include <stdlib.h>

static int	count_digits(long num)
{
	int	digits;

	digits = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		num /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	num;
	int		is_negative;
	int		len;

	num = n;
	is_negative = 0;
	if (num < 0)
		is_negative = 1;
	len = count_digits(num);
	if (is_negative)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
	{
		str[0] = '0';
		return (str);
	}
	if (num < 0)
		num = -num;
	while (num > 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}