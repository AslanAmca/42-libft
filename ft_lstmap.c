/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaslan <aaslan@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 01:18:31 by aaslan            #+#    #+#             */
/*   Updated: 2022/06/02 16:29:52 by aaslan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*first_node;
	t_list	*last_node;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	first_node = ft_lstnew(f(lst->content));
	if (first_node == NULL)
		return (NULL);
	last_node = first_node;
	lst = lst->next;
	while (lst != NULL)
	{
		new_node = ft_lstnew(f(lst->content));
		if (new_node == NULL)
		{
			ft_lstclear(&first_node, del);
			return (NULL);
		}
		last_node -> next = new_node;
		last_node = new_node;
		lst = lst -> next;
	}
	return (first_node);
}
