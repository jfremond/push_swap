/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 13:02:35 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/12 10:22:25 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	is_sorted(t_list *list)
{
	t_list	*cursor;
	t_list	*c_next;

	cursor = list;
	c_next = cursor->next;
	if (!cursor || !cursor->next)
		return (1);
	while (cursor)
	{
		if (cursor->value > c_next->value)
			return (0);
		if (c_next->next)
			c_next = c_next->next;
		cursor = cursor->next;
	}
	return (1);
}

int	is_rsorted(t_list *list)
{
	t_list	*cursor;
	t_list	*c_next;

	cursor = list;
	c_next = cursor->next;
	if (!cursor || !cursor->next)
		return (1);
	while (cursor)
	{
		if (cursor->value < c_next->value)
			return (0);
		if (c_next->next)
			c_next = c_next->next;
		cursor = cursor->next;
	}
	return (1);
}
