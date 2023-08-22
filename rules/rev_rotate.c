/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 15:30:06 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/20 16:59:00 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	rev_rotate(t_node **stack)
{
	t_node	*last;
	t_node	*first;
	t_node	*top;

	if ((!*stack) || !(*stack)->next)
		return ;
	first = *stack;
	last = *stack;
	while (last->next->next)
		last = last->next;
	top = last->next;
	last->next = NULL;
	*stack = top;
	top->next = first;
}
