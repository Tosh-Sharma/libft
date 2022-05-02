/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsharma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 19:54:56 by tsharma           #+#    #+#             */
/*   Updated: 2022/05/02 21:01:36 by tsharma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*current;
	t_list	*prev;

	current = lst;
	res = NULL;
	while (current)
	{
		ft_lstadd_back(&res, ft_lstnew(f(current->content)));
		del(current->content);
		prev = current;
		current = current->next;
		free(prev);
	}
	lst = NULL;
	free(lst);
	return (res);
}
