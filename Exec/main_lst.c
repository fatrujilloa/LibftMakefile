/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloctest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ftrujill <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 14:20:56 by ftrujill          #+#    #+#             */
/*   Updated: 2018/11/18 17:11:00 by ftrujill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	del(void *s, size_t n)
{
	n = 0;
	free(s);
}

void	funct(t_list *lst)
{
	ft_putnstr((char*)lst->content, lst->content_size);
	ft_putstr("\n");
	ft_putstr("\n");
}

t_list	*gunct(t_list *lst)
{
	char *s;
	
	s = (char*)lst->content;
	s[0] = '0';
	return (lst);
}

int	main(int argc, char **argv)
{
	t_list	**alst;
	t_list	*lst;
	t_list	*new;
	char	*str;
	int		i;
	
	if (argc != 4)
	{
		printf("%s. Introduce 3 strings\n", argv[0]);
		return (0);
	}
	str = argv[1];
	alst = &lst;
	i = 0;
	while (i < argc)
	{
		new = ft_lstnew(argv[i], ft_strlen(argv[i]));
		ft_lstadd(alst, new);
		i++;
	}
	ft_lstprt(ft_lstmap(*alst, &gunct));
	//ft_lstiter(*alst, &funct);
	/*ft_lstprt(*alst);
	ft_lstdelone(alst, &del);
	ft_lstprt(*alst);
	if (*alst == NULL)
	printf("It is NULL");*/
	return (0);
}
