/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhamini <rhamini@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 10:01:15 by rhamini           #+#    #+#             */
/*   Updated: 2024/03/28 14:20:38 by rhamini          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*int	check_input(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= '0' )
			j++;
		}
		i++;
	}
	return (1);
}*/

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

// check_input(av);
	a = ft_fill(av);
	ft_lstiter(a);
	printf("\n\n");
	printf("\n\n");
	ft_lstiter(a);
	(void)ac;
}
