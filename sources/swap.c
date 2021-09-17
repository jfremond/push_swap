/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:24:09 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/01 11:15:15 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	swap(t_list **list)
{
	t_list	**tmp;

	tmp = list;
	(*tmp)->value = (*tmp)->value ^ (*tmp)->next->value;
	(*tmp)->next->value = (*tmp)->value ^ (*tmp)->next->value;
	(*tmp)->value = (*tmp)->value ^ (*tmp)->next->value;
	(*tmp)->index = (*tmp)->index ^ (*tmp)->next->index;
	(*tmp)->next->index = (*tmp)->index ^ (*tmp)->next->index;
	(*tmp)->index = (*tmp)->index ^ (*tmp)->next->index;
}

void	write_sa(t_list **list)
{
	swap(list);
	write(1, "sa\n", 3);
}

void	write_sb(t_list **list)
{
	swap(list);
	write(1, "sb\n", 3);
}
