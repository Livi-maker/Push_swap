#include "push_swap.h"

int	findmin(t_list	*stackA)
{
	t_list	*copy;
	int	position;
	int	min;
	int	len;

	len = ft_lstsize(stackA);
	min = ft_atoi(stackA -> content);
	position = 0;
	copy = stackA;
	while (stackA -> next)
	{
		if (ft_atoi((stackA -> next) -> content) < min)
			min = ft_atoi((stackA -> next) -> content);
		stackA = stackA -> next;
	}
	while (copy)
	{
		if (ft_atoi(copy -> content) == min)
			break ;
		position++;
		copy = copy -> next;
	}
	if (position > len / 2)
		return (position - len);
	return (position);
}

void	start_sorting(t_list **stackA, t_list **stackB, int *operations)
{
	int	rotations;

	rotations = 0;
	while (is_sorted(*stackA) > 1)
	{
		rotations = findmin(*stackA);
		if (rotations == 0)
		{
			pb(stackA, stackB);
			*operations += 1;
		}
		else if (rotations > 0)
		{
			while (rotations-- > 0)
				ra(stackA);
			*operations += rotations;
		}
		else
		{
			while (rotations < 0)
			{
				rra(stackA);
				rotations++;
			}
			*operations += (rotations * -1);
		}
	}
}
