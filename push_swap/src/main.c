/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhamini <rhamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:01:15 by rhamini           #+#    #+#             */
/*   Updated: 2024/04/07 14:47:24 by rhamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_fill(char **av)
{
	t_list	*a;
	int		i;

	i = 1;
	a = ft_lstnew(ft_atoi(av[i]));
	i++;
	while (av[i])
	{
		ft_lstadd_back(a, ft_atoi(av[i]));
		i++;
	}
	return (a);
}

int	main(int ac, char **av)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (!check_input(ac, av + 1))
		a = ft_fill(av);
	if (a != NULL)
		ft_sort(&a, &b, ac);
	printf("PILE A\n\n");
	ft_lstiter(a);
	printf("PILE B\n\n");
	ft_lstiter(b);
	(void)ac;
}
