/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sorting.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldei-sva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 16:30:00 by ldei-sva          #+#    #+#             */
/*   Updated: 2025/01/30 20:34:59 by ldei-sva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_right_order(t_list *stack)
{
	int	n1;
	int	n2;

	while (stack -> next != NULL)
	{
		n1 = ft_atoi(stack-> content);
		n2 = ft_atoi((stack-> next)-> content);
		if (n1 > n2)
			return (0);
		stack = stack -> next;
	}
	return (1);
}

void	order_three(t_list **stack)
{
	int	n1;
	int	n2;

	while (is_right_order(*stack) != 1)
	{
		n1 = ft_atoi((*stack)-> content);
		n2 = ft_atoi(((*stack)-> next)-> content);
		if (is_sorted(*stack) == 1 && n1 > n2)
			ra(stack, 1, NULL);
		else if (n1 > n2)
			sa(stack);
		else
			rra(stack, 1, NULL);
	}
}

void	final_sorting(t_list **stack_a)
{
	t_list	*min;
	int		rotations;

	min = findmin(*stack_a);
	rotations = find_rotations(*stack_a, min);
	go_for_rotation(rotations, 0, stack_a, NULL);
}

int	lenghtordered(t_list *stack)
{
	int	lenght;

	lenght = 0;
	while (stack -> next)
	{
		if (ft_atoi(stack -> content) > ft_atoi((stack -> next)-> content))
			break ;
		lenght++;
		stack = stack -> next;
	}
	return (lenght);
}

t_list	*longest(t_list *stack)
{
	int		lenght;
	t_list	*start;

	lenght = 0;
	while (stack)
	{
		if (lenghtordered(stack) > lenght)
		{
			lenght = lenghtordered(stack);
			start = stack;
		}
		stack = stack -> next;
	}
	return (start);
}
