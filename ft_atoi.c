/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 04:21:12 by emiarik           #+#    #+#             */
/*   Updated: 2026/02/01 01:45:39 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int	ft_atoi(const char *nptr)
{
	size_t	result;
	size_t	i;
	int		sign;

	sign = 1;
	result = 0;
	i = 0;
	while ((nptr[i] == ' ' || nptr[i] >= 7) && (nptr[i] <= 13))
	{
		i++;
	}
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	result = result * sign;
	return (result);
}
