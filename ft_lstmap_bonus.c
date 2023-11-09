/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdutel <cdutel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:43:56 by cdutel            #+#    #+#             */
/*   Updated: 2023/11/09 05:30:45 by cdutel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*f(void *content)
{
	content +=1;

	return (content);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
		void (*del)(void *))
{
	t_list	*new_list;

	new_list = malloc(sizeof(t_list));
	if (!new_list)
		del(new_list->content);
	if (lst)
	{
		new_list = lst;
		while (new_list)
		{
			f(new_list->content);
			new_list = new_list->next;
		}
	}
	return (new_list);
}
/*
int main(int argc, char **argv)
{
	t_list element1, element2, element3;
	t_list *begin_list = NULL;
	t_list *list;

	if (argc == 4)
	{
		element1.content = argv[1];
		element1.next = &element2;
		element2.content = argv[2];
		element2.next = &element3;
		element3.content = argv[3];
		element3.next = NULL;

		begin_list = &element1;
	}

	list = ft_lstmap(begin_list, f);

	while (list)
	{
		__builtin_printf("%s\n", (char *)list->content);
		list = list->next;
	}

    return 0;
}*/

