/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 02:25:29 by emiarik           #+#    #+#             */
/*   Updated: 2026/02/01 02:35:39 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stddef.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	str = malloc(len);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, &s[start], len);
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	*selam;

	selam = "merhaba hojam";
	printf("%s", ft_substr(selam, 8, 5));
}
