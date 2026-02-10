/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 04:08:29 by emiarik           #+#    #+#             */
/*   Updated: 2026/01/31 04:19:32 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	find_my_keyword(char *now, const char *little)
{
	size_t	i;

	i = 0;
	while (little[i])
	{
		if (now[i] == little[i])
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (i);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	len_little;

	i = 0;
	len_little = ft_strlen(needle);
	if (len_little == 0)
		return ((char *)haystack);
	if (len != 0)
	{
		while (haystack[i] && (i + len_little) <= len)
		{
			if (find_my_keyword((char *)&haystack[i], needle) == len_little)
			{
				return ((char *)&haystack[i]);
			}
			i++;
		}
	}
	return ((char *) NULL);
}
