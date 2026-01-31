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

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_little;

	i = 0;
	len_little = ft_strlen(little);
	if (len_little == 0)
	{
		return ((char *)big);
	}
	if (!(len == 0))
	{
		while (i <= (len - len_little) && big[i] != '\0')
		{
			if (!(ft_strncmp(big, little, len_little)))
			{
				return ((char *)&big[i]);
			}
			i++;
		}
	}
	return ((char *) NULL);
}
