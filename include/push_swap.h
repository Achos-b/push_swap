/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkaztaou <bkaztaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 06:28:37 by bkaztaou          #+#    #+#             */
/*   Updated: 2023/08/21 17:22:36 by bkaztaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* LIBRARIES */

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

/* STRUCTURES */

typedef struct s_node
{
	int				num;
	struct s_node	*next;
}	t_node;

/* FUNCTIONS PROTOTYPE */

int		ft_isdup_node(t_node *stack, int val);
int		ft_atoi(const char *str);
int		pop(t_node **stack);
void	push(t_node **stack, int val);
void	shift(t_node **stack, int val);
void	deallocate(t_node **stack);
void	print_list(t_node *list);
void	ft_error(void);
void	sa(t_node **stack_a);
void	sb(t_node **stack_b);
void	ss(t_node **stack_a, t_node **stack_b);
void	pa(t_node **stack_a, t_node **stack_b);
void	pb(t_node **stack_a, t_node **stack_b);
void	ra(t_node **stack_a);
void	rb(t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rev_rotate(t_node **stack);
void	algorithm(t_node **stack_a, t_node **stack_b);

#endif
