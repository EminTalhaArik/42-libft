/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:44:22 by emiarik           #+#    #+#             */
/*   Updated: 2026/01/31 04:53:56 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_org;
	const unsigned char	*src_org;

	if (!dst && !src)
		return (NULL);
	dst_org = (unsigned char *)dst;
	src_org = (const unsigned char *)src;
	if (dst_org > src_org)
	{
		while (len > 0)
		{
			len--;
			dst_org[len] = src_org[len];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
