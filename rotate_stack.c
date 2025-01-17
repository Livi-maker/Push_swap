#include "push_swap.h"

void	ra(t_list **stackA)
{
	t_list	*temp;
	t_list	*temp2;

	if (ft_lstsize(*stackA) <= 1)
		return;
	temp2 = *stackA;
	temp = ft_lstlast(*stackA);
	*stackA = (*stackA) -> next;
	temp -> next = temp2;
	temp2 -> next = NULL;
	write(1, "ra\n", 3);
}

void    rb(t_list **stackB)
{
	t_list  *temp;
	t_list  *temp2;

	if (ft_lstsize(*stackB) <= 1)
		return;
	temp2 = *stackB;
	temp = ft_lstlast(*stackB);
	*stackB = (*stackB) -> next;
	temp -> next = temp2;
	temp2 -> next = NULL;
	write(1, "rb\n", 3);
}

void	rr(t_list **stackA, t_list **stackB)
{
	ra(stackA);
	rb(stackB);
	write(1, "rr\n", 3);
}
