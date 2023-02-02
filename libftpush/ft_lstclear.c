/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equadrin <equadrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 20:57:15 by lmorelli          #+#    #+#             */
/*   Updated: 2023/02/02 17:25:08 by equadrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*ft_lstsecondlast(t_list *lst)
{
	if (!lst || !(lst->next))
		return (NULL);
	while (lst->next->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*second_last;

	if (!lst || !*lst || !del)
		return ;
	while ((*lst)->next)
	{
		second_last = ft_lstsecondlast(*lst);
		ft_lstdelone(second_last->next, del);
		second_last->next = NULL;
	}
	ft_lstdelone(*lst, del);
	*lst = NULL;
}
