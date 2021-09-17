/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_very_long_list.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 15:52:50 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/17 12:01:53 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_very_long_list(t_list **list_a, t_list **list_b, t_infos *infos)
{
	int	count;

	get_infos(*list_a, infos);
	if (infos->sorted == 1)
		return ;
	while (infos->size > 0)
	{
		count = 45;
		while (count > 0)
		{
			push_to_b(list_a, list_b, hold_f(*list_a, 0, 44),
				hold_s(*list_a, 0, 44));
			--count;
		}
		--infos->size;
		assign_minus_one(*list_a);
		assign_index(*list_a);
	}
	push_to_a(list_a, list_b, infos);
}
