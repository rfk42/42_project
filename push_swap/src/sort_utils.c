/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhamini <rhamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 14:32:13 by rhamini           #+#    #+#             */
/*   Updated: 2024/04/09 08:32:58 by rhamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void	lst_target(t_list **lst, t_list **lst2)
{
	long	current_target;
	t_list	*tmp_lst;
	t_list	*tmp_lst2;

	tmp_lst2 = *lst2;
	while (tmp_lst2)
	{
		current_target = 9223372036854775807;
		tmp_lst = *lst;
		while (tmp_lst)
		{
			if (tmp_lst->value > tmp_lst2->value
				&& tmp_lst->value < current_target)
			{
				current_target = tmp_lst->value;
				tmp_lst2->target = current_target;
			}
			tmp_lst = tmp_lst->next;
		}
		if (current_target == 9223372036854775807)
			tmp_lst2->target = find_kawainee(lst);
		tmp_lst2 = tmp_lst2->next;
	}
}*/

/*void	lst_cost(t_list **lst, t_list **lst2)
{
	t_list	*tmp;
	int		len1;
	int		len2;
	int		mid1;
	int		mid2;

	tmp = *lst;
	len1 = lst_len(tmp);
	len2 = lst_len(*lst2);
	mid1 = len1 / 2;
	mid2 = len2 / 2;
	while (tmp)
	{
		if (tmp->index >= mid1 && tmp->target->index >= mid2)
			tmp->cout = (len1 - tmp->index) + (len2 - tmp->target->index);
		else if (tmp->index <= mid1 && tmp->target->index >= mid2)
			tmp->cout = tmp->index + (len2 - tmp->target->index);
		else if (tmp->index >= mid1 && tmp->target->index <= mid2)
			tmp->cout = (len1 - tmp->index) + tmp->target->index;
		else
			tmp->cout = tmp->index + tmp->target->index;
		tmp = tmp->next;
	}
}*/

t_list	*get_hess(t_list *lst)
{
	t_list	*hess;
	t_list	*tmp_lst;

	tmp_lst = lst;
	hess = NULL;
	while (tmp_lst)
	{
		if (hess == NULL || tmp_lst->cout <= hess->cout)
			hess = tmp_lst;
		tmp_lst = tmp_lst->next;
	}
	return (hess);
}