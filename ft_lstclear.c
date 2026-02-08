/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 06:50:20 by emiarik           #+#    #+#             */
/*   Updated: 2026/02/08 06:57:32 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next_node;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next_node = current->next;
		ft_lstdelone(current, del);
		current = next_node;
	}
	*lst = NULL;
}

#include <stdio.h>

int	main(void)
{
	
	t_list	*selam;
	t_list	*selam2;
	int		*a;
	int		*b;	

	a = ft_calloc(1, sizeof(int));
	b = ft_calloc(1, sizeof(int));
	
	*a = 42;
	*b = 21;
	
	selam = ft_lstnew(a);
	selam2 = ft_lstnew(b);
	selam->next = selam2;
	t_list	*tmp;
	tmp = selam;
	while (tmp != NULL)
	{
		printf("%d \n", *(int *)(tmp->content));
		tmp = tmp->next;
	}

	ft_lstclear(&selam, free);
	if (selam == NULL)
		printf("BASARILI! Liste tamamen silindi (selam == NULL).\n");
	else
		printf("HATA! Liste hala bir yeri gösteriyor: %p\n", (void *)selam);
}
