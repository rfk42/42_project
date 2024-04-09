/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhamini <rhamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 14:05:26 by rhamini           #+#    #+#             */
/*   Updated: 2024/04/09 04:35:40 by rhamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_len(t_list *lst)
{
	int		i;
	t_list	*tmp_lst;

	i = 0;
	tmp_lst = lst;
	while (lst)
	{
		i++;
		lst = lst->next;
		if (lst == tmp_lst)
			return (i);
	}
	return (i);
}

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}

t_list	*ft_lstlast(t_list *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

void	ft_lstadd_back(t_list *lst, int b)
{
	if (!lst)
		return ;
	if (lst)
		ft_lstlast(lst)->next = ft_lstnew(b);
}

void	ft_lstiter(t_list *lst)
{
	while (lst)
	{
		printf("value = %d\n", lst->value);
		// printf("addr  = %p\n", lst);
		// printf("addr next = %p\n", lst->next);
		// printf("\n");
		printf("target = %d\n", lst->target);
		printf("cout = %d\n", lst->cout);
		printf("index = %d\n", lst->index);
		printf("\n");
		printf("\n");
		lst = lst->next;
	}
}
