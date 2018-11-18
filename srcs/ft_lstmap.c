/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 15:27:08 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/18 17:53:44 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	**newlst;
	t_list	*elem;
	t_list	*next;

	if (!(newlst = (t_list**)malloc(sizeof(t_list*))))
		return (NULL);
	*newlst = NULL;
	while (lst)
	{
		next = lst->next;
		lst = f(lst);
		if (!(elem = ft_lstnew(lst->content, lst->content_size)))
			return (NULL);
		ft_lstadd(newlst, elem);
		lst = next;
	}
	return (*newlst);
}
