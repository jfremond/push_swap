/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 13:59:19 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/02 20:54:02 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_three(t_list **list, t_infos *infos)
{
	t_list	**tmp;

	tmp = list;
	get_infos(*tmp, infos);
	while (infos->sorted == 0)
	{
		if (infos->s_pos == 1 && infos->b_pos == 2)
			write_sa(tmp);
		else if (infos->b_pos == 0)
			write_ra(tmp);
		else if (infos->b_pos == 1)
			write_rra(tmp);
		get_infos(*tmp, infos);
	}
}

void	reverse_sort_three(t_list **list, t_infos *infos)
{
	t_list	**tmp;

	tmp = list;
	get_infos(*tmp, infos);
	while (infos->rsorted == 0)
	{
		if (infos->s_pos == 2 && infos->b_pos == 1)
			write_sb(tmp);
		else if (infos->s_pos == 0)
			write_rb(tmp);
		else if (infos->s_pos == 1)
			write_rrb(tmp);
		get_infos(*tmp, infos);
	}
}
