/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 16:50:48 by emiarik           #+#    #+#             */
/*   Updated: 2026/01/31 05:08:01 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int character)
{
	if (!(character >= 'a' && character <= 'z'))
	{
		if (!(character >= 'A' && character <= 'Z'))
		{
			return (0);
		}
	}
	return (1);
}
