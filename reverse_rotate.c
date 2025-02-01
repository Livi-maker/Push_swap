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

#include "push_swap.h"

void	rra(t_list **stack_a, int toprint, int *n)
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
	if (toprint == 1)
		write(1, "rra\n", 4);
	if (n != NULL)
		*n = *n + 1;
}

void	rrb(t_list **stack_b, int toprint, int *n)
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
	if (toprint == 1)
		write(1, "rrb\n", 4);
	if (n != NULL)
		*n = *n + 1;
}

void	rrr(t_list **stack_a, t_list **stack_b, int *rtsa, int *rtsb)
{
	rra(stack_a, 0, rtsa);
	rrb(stack_b, 0, rtsb);
	write(1, "rrr\n", 4);
}
