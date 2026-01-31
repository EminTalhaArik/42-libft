/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:20:43 by emiarik           #+#    #+#             */
/*   Updated: 2026/02/01 01:34:35 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total_count;
	void	*s;

	total_count = nmemb * size;
	if (nmemb != 0 && total_count / nmemb == size)
		return (NULL);
	s = malloc(total_count);
	if (s == NULL)
		return (NULL);
	ft_bzero(s, total_count);
	return (s);
}
