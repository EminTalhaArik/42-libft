
#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;
	size_t	len;

	if (!s || !f) 
		return (NULL);

	len = ft_strlen(s); 

	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str) 
		return (NULL);

	i = 0;
	while (i < len)
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0'; 

	return (new_str);
}
