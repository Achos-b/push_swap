/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 06:49:53 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/21 17:26:08 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_node	*stack_a;
	t_node	*stack_b;
	int		curr_num;
	int		i;

	stack_a = NULL;
	stack_b = NULL;
	if (ac < 2)
		exit(2);
	i = 0;
	while (++i < ac)
	{
		curr_num = ft_atoi(av[i]);
		if (ft_isdup_node(stack_a, curr_num))
			ft_error();
		push(&stack_a, curr_num);
	}
	printf("----- STACK A -----\n");
	print_list(stack_a);
	printf("----- STACK B -----\n");
	print_list(stack_b);
	algorithm(&stack_a, &stack_b);
	printf("----- STACK A -----\n");
	print_list(stack_a);
	printf("----- STACK B -----\n");
	print_list(stack_b);
	deallocate(&stack_a);
	return (0);
}
