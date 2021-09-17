/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nums_and_pos.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 19:04:16 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/01 11:15:27 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	get_big_num(t_list *list, t_infos *infos)
{
	t_list	*cursor;

	infos->b_num = INT_MIN;
	cursor = list;
	while (cursor)
	{
		if (infos->b_num < cursor->value)
			infos->b_num = cursor->value;
		cursor = cursor->next;
	}
	return (infos->b_num);
}

int	get_big_pos(t_list *list, t_infos *infos)
{
	int		i;
	int		num;
	t_list	*cursor;

	i = 0;
	num = INT_MIN;
	infos->b_pos = 0;
	cursor = list;
	while (cursor)
	{
		if (num < cursor->value)
		{
			num = cursor->value;
			infos->b_pos = i;
		}
		++i;
		cursor = cursor->next;
	}
	return (infos->b_pos);
}

int	get_small_num(t_list *list, t_infos *infos)
{
	t_list	*cursor;

	infos->s_num = INT_MAX;
	cursor = list;
	while (cursor)
	{
		if (infos->s_num > cursor->value)
			infos->s_num = cursor->value;
		cursor = cursor->next;
	}
	return (infos->s_num);
}

int	get_small_pos(t_list *list, t_infos *infos)
{
	int		i;
	int		num;
	t_list	*cursor;

	i = 0;
	num = INT_MAX;
	infos->s_pos = 0;
	cursor = list;
	while (cursor)
	{
		if (num > cursor->value)
		{
			num = cursor->value;
			infos->s_pos = i;
		}
		++i;
		cursor = cursor->next;
	}
	return (infos->s_pos);
}
