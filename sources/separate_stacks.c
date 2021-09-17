/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separate_stacks.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 14:54:10 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/02 16:54:29 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	separate_stacks(t_list **list_a, t_list **list_b, t_infos *infos)
{
	int		i;
	t_list	**tmp_a;
	t_list	**tmp_b;

	i = 0;
	tmp_a = list_a;
	tmp_b = list_b;
	get_infos(*tmp_a, infos);
	while (i <= infos->size)
	{
		if ((*tmp_a)->index < infos->pivot)
			write_pb(tmp_b, tmp_a);
		else if ((*tmp_a)->index >= infos->pivot)
			write_rra(tmp_a);
		++i;
	}
}
