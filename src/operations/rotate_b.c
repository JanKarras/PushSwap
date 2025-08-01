/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarras <jkarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:39:31 by rmatthes          #+#    #+#             */
/*   Updated: 2025/07/28 14:44:57 by jkarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	rb(t_list **stack_b)
{
	t_list	*second_node;
	t_list	*last_node;

	ft_putendl_fd("rb", 1);
	if (stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	second_node = (*stack_b)->next;
	last_node = ft_lstlast(*stack_b);
	(*stack_b)->next = NULL;
	last_node->next = *stack_b;
	*stack_b = second_node;
}
