/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_infos.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/01 11:40:54 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/01 20:44:08 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	get_infos(t_list *list, t_infos *infos)
{
	infos->s_num = get_small_num(list, infos);
	infos->b_num = get_big_num(list, infos);
	infos->s_pos = get_small_pos(list, infos);
	infos->b_pos = get_big_pos(list, infos);
	infos->sorted = is_sorted(list);
	infos->rsorted = is_rsorted(list);
	infos->size = ft_lstsize(list);
	infos->pivot = ft_lstsize(list) / 2;
}
