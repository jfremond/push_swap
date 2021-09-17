/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 18:24:44 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/02 16:52:11 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sort_five(t_list **list_a, t_list **list_b, t_infos *infos)
{
	t_list	**tmp_a;
	t_list	**tmp_b;
	int		i;

	tmp_a = list_a;
	tmp_b = list_b;
	get_infos(*tmp_a, infos);
	if (infos->sorted == 1)
		return ;
	separate_stacks(tmp_a, tmp_b, infos);
	sort_three(tmp_a, infos);
	reverse_sort_three(tmp_b, infos);
	i = -1;
	while (i <= ft_lstsize(*tmp_b))
	{
		write_pa(tmp_a, tmp_b);
		++i;
	}
}
