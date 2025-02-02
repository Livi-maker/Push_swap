/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldei-sva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 20:21:22 by ldei-sva          #+#    #+#             */
/*   Updated: 2025/02/02 18:19:46 by ldei-sva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*findmin(t_list *stack)
{
	t_list	*temp;
	int		number;

	number = ft_atoi(stack -> content);
	temp = stack;
	while (stack -> next)
	{
		if (number > ft_atoi((stack -> next)-> content))
		{
			number = ft_atoi((stack -> next)-> content);
			temp = stack -> next;
		}
		stack = stack -> next;
	}
	return (temp);
}

int	is_sorted(t_list *stack)
{
	int		n1;
	int		n2;
	t_list	*min;
	t_list	*copy;
	t_list	*end;

	min = findmin(stack);
	copy = min;
	end = ft_lstlast(stack);
	end -> next = stack;
	while (min -> next != copy)
	{
		n1 = ft_atoi(min -> content);
		n2 = ft_atoi((min -> next)-> content);
		if (n1 > n2)
		{
			end -> next = NULL;
			return (0);
		}
		min = min -> next;
	}
	end -> next = NULL;
	return (1);
}

void	order_numbers(t_list **stack_a)
{
	t_list	**stack_b;

	stack_b = malloc(sizeof(t_list *));
	*stack_b = NULL;
	start_sorting(stack_a, stack_b);
	free(stack_b);
}

int	main(int ac, char **av)
{
	t_list	**stack_a;

	if (ac == 1)
		return (0);
	stack_a = malloc(sizeof(t_list *));
	if (parsing_input(ac, av, stack_a) == 0)
	{
		ft_putstr_fd("Error\n", 2);
		free(stack_a);
		return (0);
	}
	order_numbers(stack_a);
	ft_lstclear(stack_a, free);
	free(stack_a);
}
