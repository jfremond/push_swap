/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_average_list.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 20:54:33 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/17 14:51:17 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	merge_lists(t_list **list_a, t_list **list_b, t_infos *infos)
{
	t_list	**tmp_a;
	t_list	**tmp_b;
	int		size_b;
	int		half;

	tmp_a = list_a;
	tmp_b = list_b;
	size_b = ft_lstsize((*tmp_b));
	while (size_b > 0)
	{
		half = size_b / 2;
		get_infos((*tmp_b), infos);
		if (infos->b_pos == 0)
		{
			write_pa(tmp_a, tmp_b);
			--size_b;
		}
		else if ((*tmp_b)->next->value == infos->b_num)
			write_sb(tmp_b);
		else if (infos->b_pos > 0 && infos->b_pos <= half)
			write_rb(tmp_b);
		else if (infos->b_pos > 0 && infos->b_pos > half)
			write_rrb(tmp_b);
	}
}

void	sort_average_list(t_list **list_a, t_list **list_b, t_infos *infos)
{
	t_list	**tmp_a;
	t_list	**tmp_b;
	int		size_a;
	int		size_b;

	tmp_a = list_a;
	tmp_b = list_b;
	size_a = ft_lstsize((*tmp_a));
	size_b = 0;
	get_infos(*list_a, infos);
	if (infos->sorted == 1)
		return ;
	while (size_b < (size_a - 3))
	{
		infos->b_num = get_big_num((*tmp_b), infos);
		if ((*tmp_a)->index < (size_a - 3))
		{
			write_pb(tmp_b, tmp_a);
			++size_b;
		}
		else
			write_ra(tmp_a);
	}
	sort_three(tmp_a, infos);
	merge_lists(tmp_a, tmp_b, infos);
}
