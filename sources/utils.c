/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 12:32:09 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/15 11:52:10 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	hold_f(t_list *list_a, int s_index, int b_index)
{
	int	hold_first;

	hold_first = 0;
	while (list_a != NULL)
	{
		if (list_a->index >= s_index && list_a->index <= b_index)
			return (hold_first);
		list_a = list_a->next;
		++hold_first;
	}
	return (-1);
}

int	hold_s(t_list *list_a, int s_index, int b_index)
{
	int		hold_second;
	t_list	*last;

	hold_second = 0;
	last = ft_lstlast(list_a);
	while (last != NULL)
	{
		if (last->index >= s_index && last->index <= b_index)
			return (++hold_second);
		last = last->prev;
		++hold_second;
	}
	return (-1);
}

void	push_to_b(t_list **list_a, t_list **list_b, int first, int second)
{
	if (first == -1 || second == -1)
		return ;
	if (first <= second)
	{
		second = 0;
		while (first > 0)
		{
			write_ra(list_a);
			--first;
		}
	}
	if (second < first)
	{
		first = 0;
		while (second > 0)
		{
			write_rra(list_a);
			--second;
		}
	}
	write_pb(list_b, list_a);
}

void	push_to_a(t_list **list_a, t_list **list_b, t_infos *infos)
{
	get_infos(*list_b, infos);
	while (infos->size > 0)
	{
		get_infos(*list_b, infos);
		while (infos->b_pos > 0)
		{
			if ((*list_b)->index == (*list_b)->next->index - 1)
				write_sb(list_b);
			else if (infos->b_pos <= infos->size / 2)
				write_rb(list_b);
			else
				write_rrb(list_b);
			get_infos(*list_b, infos);
		}
		write_pa(list_a, list_b);
		--infos->size;
	}
}
