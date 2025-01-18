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

int	is_sorted(t_list *stack)
{
	int	n1;
	int	n2;
	int	sort;

	sort = 0;
	while (stack -> next != NULL)
	{
		n1 = ft_atoi(stack -> content);
		n2 = ft_atoi((stack -> next) -> content);
		if (n1 > n2)
			sort++;
		stack = stack -> next;
	}
	return (sort);
}


void	order_numbers(t_list **stackA, int *operations)
{
	/*t_list	**stackB;

	stackB = malloc(sizeof(t_list *));
	*stackB = NULL;
	if (is_sorted(*stackA) > 1)
	{
		start_sorting(stackA, stackB, operations);
		print_stack(*stackA);
		print_stack(*stackB);
	}*/
	rra(stackA);
	print_stack(*stackA);
	rra(stackA);
	print_stack(*stackA);
	*operations += 1;
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
	printf("%d", operations);
	return (operations);
}
