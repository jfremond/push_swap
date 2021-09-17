/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struct.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 18:58:24 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/01 11:37:50 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	init_struct(t_infos *infos)
{
	infos->s_num = INT_MAX;
	infos->b_num = INT_MIN;
	infos->s_pos = 0;
	infos->s_pos = 0;
	infos->sorted = 0;
	infos->rsorted = 0;
	infos->pivot = 0;
	infos->size = 0;
}
