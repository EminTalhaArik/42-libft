/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 06:43:52 by emiarik           #+#    #+#             */
/*   Updated: 2026/02/08 06:47:34 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

#include <stdio.h>

int	main(void)
{
	
	t_list	*selam;
	t_list	*selam2;
	t_list	*yeni_selam;
	int		*a;
	int		*b;	
	int		*c;

	a = ft_calloc(1, sizeof(int));
	b = ft_calloc(1, sizeof(int));
	c = ft_calloc(1, sizeof(int));
	
	*a = 42;
	*b = 21;
	*c = 11;
	
	selam = ft_lstnew(a);
	selam2 = ft_lstnew(b);
	selam->next = selam2;

	yeni_selam = ft_lstnew(c);

	ft_lstadd_front(&selam, yeni_selam);
	t_list	*tmp;
	tmp = selam;

	while (tmp != NULL)
	{
		printf("%d \n", *(int *)(tmp->content));
		tmp = tmp->next;
	}
}
