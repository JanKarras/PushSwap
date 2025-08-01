/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkarras <jkarras@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 14:36:57 by rmatthes          #+#    #+#             */
/*   Updated: 2025/07/28 14:46:29 by jkarras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	fill_list(t_list **stack_a, int argc, char **argv)
{
	t_list	*new;
	char	**tmp_args;
	int		i;

	i = 1;
	if (argc == 2)
		tmp_args = ft_split(ft_strjoin("a ", argv[1]), ' ');
	else
		tmp_args = argv;
	if (tmp_args == NULL)
		return (ft_putendl_fd("Error", 1), -1);
	while (tmp_args[i] != NULL)
	{
		new = create_new_node(ft_atoi(tmp_args[i]));
		if (new == NULL)
			return (ft_putendl_fd("Error", 1), -1);
		ft_lstadd_back(stack_a, new);
		i++;
	}
	if (argc == 2)
		free_argv_bonus(tmp_args);
	return (0);
}

int	main(int argc, char **argv)
{
	t_list	**stack_a;
	t_list	**stack_b;
	int	flag;

	if (argc < 2)
		return (1);
	flag = 0;
	ft_check_args(argc, argv, &flag);
	if (flag == -1)
		return (ft_putendl_fd("Error", 1), -1);
	stack_a = (t_list **)malloc(sizeof(t_list));
	if (stack_a == NULL)
		return (-1);
	stack_b = (t_list **)malloc(sizeof(t_list));
	if (stack_b == NULL)
		return (free(stack_a), -1);
	*stack_a = NULL;
	*stack_b = NULL;
	if (fill_list(stack_a, argc, argv) != -1)
		sort(stack_a, stack_b);
	return (ft_lstclear(stack_a, free), free(stack_a), free(stack_b), 0);
}
