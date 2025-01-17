#include "push_swap.h"

int	is_right_order(t_list *stack)
{
	int	n1;
	int	n2;
	
	while (stack -> next != NULL)
	{
		n1 = ft_atoi(stack -> content);
		n2 = ft_atoi((stack -> next) -> content);
		if (n1 > n2)
			return (0);
		stack = stack -> next;
	}
	return (1);
}

void	order_numbers(t_list **stackA, int *operations)
{
	t_list	**stackB;

	stackB = malloc(sizeof(t_list *));
	*stackB = NULL;
	while (is_right_order(*stackA) == 0)
	{
		sa(stackA);
		pb(stackA, stackB);
		pb(stackA, stackB);
		pb(stackA, stackB);
		sa(stackA);
		pa(stackA, stackB);
		pa(stackA, stackB);
		pa(stackA, stackB);
	}
	print_stack(*stackA);
	*operations += 8;
	return ;
}

int	main(int ac, char **av)
{
	t_list	**stackA;
	int		operations;

	operations = 0;
	stackA = malloc(sizeof(t_list *));
	create_stack(stackA, ac, av);
	order_numbers(stackA, &operations);
	free(stackA);
	ft_printf("%d", operations);
	return (operations);
}
