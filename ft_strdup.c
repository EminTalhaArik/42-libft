/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:49:41 by emiarik           #+#    #+#             */
/*   Updated: 2026/02/01 02:06:56 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	arr_len;
	char	*str;

	arr_len = ft_strlen(s);
	str = malloc(arr_len);
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, arr_len);
	return (str);
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	*s;

	s = strdup("Merhaba");
	printf("%s", s);
	free(s);
	printf("\n");
	s = ft_strdup("Merhaba bro");
	printf("%s", s);
	free(s);

	s = ft_strdup("");
	printf("%s", s);
	free(s);
}
