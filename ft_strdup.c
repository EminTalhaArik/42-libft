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
	str = (char *)malloc(sizeof(char) * (arr_len + 1));
	if (str == NULL)
		return (NULL);
	ft_memcpy(str, s, arr_len + 1);
	return (str);
}
