#include "push_swap.h"

void	rra(t_list **stackA)
{
	t_list	*temp;

	temp = *stackA;
	if (ft_lstsize(*stackA) < 2)
		return ;
	*stackA = ft_lstlast(*stackA);
	(*stackA) -> next = temp;
	while (temp -> next != *stackA)
		temp++;
	temp -> next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_list **stackB)
{
	t_list	*temp;

	temp = *stackB;
	if (ft_lstsize(*stackB) < 2)
		return ;
	*stackB = ft_lstlast(*stackB);
	(*stackB) -> next = temp;
	while (temp -> next != *stackB)
		temp++;
	temp -> next = NULL;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **stackA, t_list **stackB)
{
	rra(stackA);
	rrb(stackB);
	write(1, "rrr\n", 4);
}