/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhamini <rhamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:01:42 by rhamini           #+#    #+#             */
/*   Updated: 2024/04/09 08:52:03 by rhamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	int				cout;
	int				index;
	struct s_list	*target;
	struct s_list	*next;
}					t_list;
//----- utils

t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int value);
int		lst_len(t_list *lst);
void	ft_lstadd_back(t_list *alst, int b);
void	ft_lstiter(t_list *lst);
t_list	*ft_fill(char **av);
long	ft_atoi(const char *str);
void	ft_putstr_fd(char *s);
int		check_input(int ac, char **av);
void	lst_index(t_list *lst);
void	lst_target(t_list **lst, t_list **lst2);
void	lst_cost(t_list **lst, t_list **lst2);
t_list	*get_hess(t_list *lst);
t_list	*find_kawainee(t_list *lst);
t_list	*find_baka(t_list *lst);
void	push_all_b(t_list **lst, t_list **lst2, int ac);
void	ft_sort(t_list **a, t_list **b, int ac);

//-----------operator

void	rotate(t_list **a);
void	reverse_rotate(t_list **a);
void	push(t_list **a, t_list **b);
void	swap(t_list **a);

#endif