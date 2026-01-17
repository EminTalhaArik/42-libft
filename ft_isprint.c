/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 19:19:21 by emiarik           #+#    #+#             */
/*   Updated: 2026/01/17 19:22:10 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(unsigned int character)
{
	if (ft_isalnum(character) || 32)
	{
		return (1);
	}
	return (0);
}
