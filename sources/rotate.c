/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 21:04:27 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/11 21:04:29 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	rotate(t_list **list)
{
	t_list	*tmp;

	if (!(*list) || !(*list)->next)
		return ;
	tmp = *list;
	*list = (*list)->next;
	(*list)->prev = NULL;
	tmp->next = NULL;
	ft_lstadd_back(list, tmp);
}

void	write_ra(t_list **list)
{
	rotate(list);
	write(1, "ra\n", 3);
}

void	write_rb(t_list **list)
{
	rotate(list);
	write(1, "rb\n", 3);
}
