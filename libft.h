/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:49:18 by emiarik           #+#    #+#             */
/*   Updated: 2026/01/31 04:22:44 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stddef.h>

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_toupper(int character);
int		ft_tolower(int character);
int		ft_strncmp(const char *s1, const char *s2, unsigned int n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isalpha(unsigned int character);
int		ft_isdigit(unsigned int character);
int		ft_isalnum(unsigned int character);
int		ft_isascii(unsigned int character);
int		ft_isprint(unsigned int character);
size_t	ft_strlen(const char *characters);
void	*ft_memset(void *selam, int c, size_t len);
void	*ft_bzero(void *s, size_t n);
void	*memchr(const void *s, int c, size_t n);

#endif
