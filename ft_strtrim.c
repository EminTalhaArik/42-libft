/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 03:20:17 by emiarik           #+#    #+#             */
/*   Updated: 2026/02/01 03:41:44 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

int	check_set_contains(char const character, char const *set)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(set))
	{
		if (character == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*trim_string(char const *s1, size_t start_point, size_t end_point)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = malloc(sizeof(char) * (end_point - start_point) + 1);
	if (str == NULL)
		return (NULL);
	i = start_point;
	j = 0;
	while (i < end_point)
	{
		str[j] = s1[i];
		i++;
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start_point;
	size_t	end_point;

	start_point = 0;
	while (check_set_contains(s1[start_point], set) == 1
		&& s1[start_point])
		start_point++;
	end_point = ft_strlen(s1);
	while (end_point > start_point
		&& check_set_contains(s1[end_point - 1], set) == 1)
		end_point--;
	return (trim_string(s1, start_point, end_point));
}
