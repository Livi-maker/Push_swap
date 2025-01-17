#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include "ft_printf.h"
# include "get_next_line.h"

void	create_stack(t_list **stackA, int ac, char **av);
void	print_stack(t_list	*stack);
void	sa(t_list **stackA);
void	sb(t_list **stackB);
void	ss(t_list **stackA, t_list **stackB);
void	pa(t_list **stackA, t_list **stackB);
void	pb(t_list **stackA, t_list **stackB);
void	ra(t_list **stackA);
void	rr(t_list **stackA, t_list **stackB);
void	rra(t_list **stackA);
void	rrb(t_list **stackB);
void	rrr(t_list **stackA, t_list **stackB);

#endif
