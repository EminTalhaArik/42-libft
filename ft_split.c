<<<<<<< HEAD
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
=======
>>>>>>> 3bad86e (full)

#include "libft.h"
#include <stdlib.h>

<<<<<<< HEAD
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
=======
size_t	count_words(const char *s, char c)
{
	size_t	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && in_word == 0)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

char	*get_word(const char *s, char c)
{
	size_t	len;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *)malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

void	make_free_words(char **array, size_t size)
>>>>>>> 3bad86e (full)
{
	size_t	i;

	i = 0;
<<<<<<< HEAD
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
=======
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
>>>>>>> 3bad86e (full)
}

char	**ft_split(char const *s, char c)
{
<<<<<<< HEAD
	char **str_all;
	
	str_all = malloc(sizeof(char *) * count_letter(s, c))
=======
	char	**array;
	size_t	i;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	array = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		array[i] = get_word(s, c);
		if (!array[i])
		{
			make_free_words(array, i);
			return (NULL);
		}
		while (*s && *s != c)
			s++;
		i++;
	}
	array[i] = NULL;
	return (array);
>>>>>>> 3bad86e (full)
}
