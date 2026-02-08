/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emiarik <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 05:20:46 by emiarik           #+#    #+#             */
/*   Updated: 2026/02/08 05:23:25 by emiarik          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}

int	main(void)
{
	t_list	*selam;
	t_list	*selam2;

	selam->content = 10;
	selam->next = selam2;
	selam2->content = 15;
	selam2->next=NULL;
}
