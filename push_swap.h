/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldei-sva <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 13:58:56 by ldei-sva          #+#    #+#             */
/*   Updated: 2025/02/01 13:58:59 by ldei-sva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

void	create_stack(t_list **stack_a, int ac, char **av);
void	print_stack(t_list	*stack);
void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a, int toprint, int *n);
void	rb(t_list **stack_b, int toprint, int *n);
void	rr(t_list **stack_a, t_list **stack_b, int *rtsa, int *rtsb);
void	rra(t_list **stack_a, int toprint, int *n);
void	rrb(t_list **stack_b, int toprint, int *n);
void	rrr(t_list **stack_a, t_list **stack_b, int *rtsa, int *rtsb);
int		is_sorted(t_list *stack_a);
int		is_right_order(t_list *stack_a);
void	start_sorting(t_list **stack_a, t_list **stack_b);
int		abs_value(int number);
void	go_for_rotation(int rtsa, int rtsb, t_list **stack_a, t_list **stack_b);
t_list	*best_element(t_list *stack_a, t_list *stack_b);
int		find_rotations(t_list *stack_a, t_list *node);
void	insert_A(t_list **stack_a, t_list **stack_b);
int		one_input(char *str);
int		check(char *str);
int		parsing_input(int ac, char **av, t_list **stack_a);
void	free_array(char **array);
t_list	*findmin(t_list *stack);
void	order_three(t_list **stack);
void	final_sorting(t_list **stack_a);
int		lenghtordered(t_list *stack);
t_list	*longest(t_list *stack);

#endif
