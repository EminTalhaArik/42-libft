/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 20:18:36 by emiarik           #+#    #+#             */
/*   Updated: 2026/01/30 21:30:33 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*dst_org;
	const unsigned char	*src_org;
	size_t				i;

	dst_org = (unsigned char *) dst;
	src_org = (const unsigned char *) src;
	if (dst_org == NULL && src_org == NULL)
		return (dst);
	i = 0;
	while (i < n)
	{
		dst_org[i] = src_org[i];
		i++;
	}
	return (dst);
}
