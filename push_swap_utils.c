#include "push_swap.h"

void create_stack(t_list **stackA, int ac, char **av)
{
	t_list		*node;
	int			n;

	n = 1;
	*stackA = NULL;
	while (n < ac)
	{
		node = ft_lstnew(av[n]);
		ft_lstadd_back(stackA, node);
		n++;
	}
}

void print_stack(t_list *stack)
{
	int	number;

	printf("stack\n");
	while (stack)
	{
		number = ft_atoi(stack -> content);
		printf("%d\n", number);
		stack = stack -> next;
	}
	printf("end\n");
}
