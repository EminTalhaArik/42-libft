/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:44:22 by emiarik           #+#    #+#             */
/*   Updated: 2026/01/25 18:58:04 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*dst_org;
	const unsigned char	*src_org;
	size_t				i;

	if (dst_org == NULL && src_org == NULL)
		return (dst);
	if (dst_org[0] > src_org[0])
	{
		while (len > 0)
		{
			dst_org[len] = src_org[len];
			len--;
		}
		return (dst);
	}
	if (dst_org[0] < src_org[0])
	{	
		i = 0;
		while (src_org[i])
		{
			dst_org[i] = src_org[i];
			i++;
		}
		return (dst);
	}
}
