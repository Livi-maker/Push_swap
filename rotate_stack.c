/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldei-sva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:44:02 by ldei-sva          #+#    #+#             */
/*   Updated: 2025/02/01 13:51:12 by ldei-sva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_a, int toprint, int *n)
{
	t_list	*temp;
	t_list	*temp2;

	if (ft_lstsize(*stack_a) <= 1)
		return ;
	temp2 = *stack_a;
	temp = ft_lstlast(*stack_a);
	*stack_a = (*stack_a)-> next;
	temp -> next = temp2;
	temp2 -> next = NULL;
	if (toprint == 1)
		write(1, "ra\n", 3);
	if (n != NULL)
		*n = *n - 1;
}

void	rb(t_list **stack_b, int toprint, int *n)
{
	t_list	*temp;
	t_list	*temp2;

	if (ft_lstsize(*stack_b) <= 1)
		return ;
	temp2 = *stack_b;
	temp = ft_lstlast(*stack_b);
	*stack_b = (*stack_b)-> next;
	temp -> next = temp2;
	temp2 -> next = NULL;
	if (toprint == 1)
		write(1, "rb\n", 3);
	if (n != NULL)
		*n = *n - 1;
}

void	rr(t_list **stack_a, t_list **stack_b, int *rtsa, int *rtsb)
{
	ra(stack_a, 0, rtsa);
	rb(stack_b, 0, rtsb);
	write(1, "rr\n", 3);
}
