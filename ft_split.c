/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 19:09:00 by emiarik           #+#    #+#             */
/*   Updated: 2026/02/04 19:36:16 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

size_t	count_letter(char *s, char c)
{
	size_t	i;
	size_t	letter_count;

	i = 0;
	letter_count = 1;
	while (s[i])
	{
		if (s[i] == c)
		{
			letter_count++;
		}
		i++;
	}
	return (letter_count);
}

size_t	count_text(char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char **str_all;
	
	str_all = malloc(sizeof(char *) * count_letter(s, c))
}
