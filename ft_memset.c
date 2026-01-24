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

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*real_ptr;

	real_ptr = (unsigned char *)ptr;
	while (len > 0)
	{
		*real_ptr++ = (unsigned char)c;
		len--;
	}
	return (ptr);
}
