/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 20:06:21 by emiarik           #+#    #+#             */
/*   Updated: 2026/01/24 20:16:29 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*real_b;

	real_b = (unsigned char *)b;
	while (len > 0)
	{
		*real_b++ = (unsigned char)c;
		len--;
	}
	return (b);
}
