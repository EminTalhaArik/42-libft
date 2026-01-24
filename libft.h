/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <emiarik@student.42kocaeli.com.tr  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 17:49:18 by emiarik           #+#    #+#             */
/*   Updated: 2026/01/24 20:18:06 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stddef.h>

int		ft_isalpha(unsigned int character);
int		ft_isdigit(unsigned int character);
int		ft_isalnum(unsigned int character);
int		ft_isascii(unsigned int character);
int		ft_isprint(unsigned int character);
int		ft_strlen(char *characters);
void	*ft_memset(void *ptr, int c, size_t len);
void	*ft_bzero(void *s, size_t n);

#endif
