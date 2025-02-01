/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldei-sva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:38:45 by ldei-sva          #+#    #+#             */
/*   Updated: 2025/02/01 13:39:01 by ldei-sva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	rra(t_list **stack_a)
{
	t_list	*temp;

	temp = *stack_a;
	if (ft_lstsize(*stack_a) < 2)
		return ;
	*stack_a = ft_lstlast(*stack_a);
	(*stack_a)-> next = temp;
	while (temp -> next != *stack_a)
		temp = temp -> next;
	temp -> next = NULL;
}

void	rrb(t_list **stack_b)
{
	t_list	*temp;

	temp = *stack_b;
	if (ft_lstsize(*stack_b) < 2)
		return ;
	*stack_b = ft_lstlast(*stack_b);
	(*stack_b)-> next = temp;
	while (temp -> next != *stack_b)
		temp = temp -> next;
	temp -> next = NULL;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	write(1, "rrr\n", 4);
}
