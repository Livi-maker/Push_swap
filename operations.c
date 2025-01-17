#include "push_swap.h"

void	sa(t_list **stackA)
{
	t_list	*temp;
	t_list	*temp2;

	if (ft_lstsize(*stackA) <= 1)
		return ;
	temp = *stackA;
	*stackA = (*stackA) -> next;
	temp2 = (*stackA) -> next;
	(*stackA) -> next = temp;
	temp -> next = temp2;
	write(1, "sa\n", 3);
}

void	sb(t_list **stackB)
{
	t_list	*temp;
	t_list	*temp2;

	if (ft_lstsize(*stackB) <= 1)
		return ;
	temp = *stackB;
	*stackB = (*stackB) -> next;
	temp2 = (*stackB) -> next;
	(*stackB) -> next = temp;
	temp -> next = temp2;
	write(1, "sb\n", 3);
}

void	ss(t_list **stackA, t_list **stackB)
{
	sa(stackA);
	sb(stackB);
	write(1, "ss\n", 3);
}

void	pa(t_list **stackA, t_list **stackB)
{
	t_list	*temp;
	t_list	*temp2;

	if (!stackB)
		return ;
	temp = *stackA;
	temp2 = *stackB;
	*stackB = (*stackB) -> next;
	ft_lstadd_front(stackA, temp2);
	(*stackA) -> next = temp;
	write(1, "pa\n", 3);
}

 void    pb(t_list **stackA, t_list **stackB)
{
	t_list  *temp;
	t_list	*temp2;
	
	if (!stackA)
		return ;
	temp = *stackB;
	temp2 = *stackA;
	*stackA = (*stackA) -> next;
	ft_lstadd_front(stackB, temp2);
	(*stackB) -> next = temp;
	write(1, "pb\n", 3);
 }
