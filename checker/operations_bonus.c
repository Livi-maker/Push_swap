/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldei-sva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:54:15 by ldei-sva          #+#    #+#             */
/*   Updated: 2025/02/02 18:27:09 by ldei-sva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

void	sa(t_list **stack_a)
{
	t_list	*temp;
	t_list	*temp2;

	if (ft_lstsize(*stack_a) <= 1)
		return ;
	temp = *stack_a;
	*stack_a = (*stack_a)-> next;
	temp2 = (*stack_a)-> next;
	(*stack_a)-> next = temp;
	temp -> next = temp2;
}

void	sb(t_list **stack_b)
{
	t_list	*temp;
	t_list	*temp2;

	if (ft_lstsize(*stack_b) <= 1)
		return ;
	temp = *stack_b;
	*stack_b = (*stack_b)-> next;
	temp2 = (*stack_b)-> next;
	(*stack_b)-> next = temp;
	temp -> next = temp2;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	sa(stack_a);
	sb(stack_b);
}

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	t_list	*temp2;

	if (!(*stack_b))
		return ;
	temp = *stack_a;
	temp2 = *stack_b;
	*stack_b = (*stack_b)-> next;
	ft_lstadd_front(stack_a, temp2);
	(*stack_a)-> next = temp;
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	t_list	*temp2;

	if (!(*stack_a))
		return ;
	temp = *stack_b;
	temp2 = *stack_a;
	*stack_a = (*stack_a)-> next;
	ft_lstadd_front(stack_b, temp2);
	(*stack_b)-> next = temp;
}
