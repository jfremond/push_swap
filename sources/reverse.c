/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:53:16 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/01 14:09:45 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	del_last_elem(t_list **list)
{
	int		i;
	t_list	*tmp;

	i = -1;
	tmp = *list;
	while (++i < ft_lstsize(*list) - 2)
		tmp = tmp->next;
	tmp->next = NULL;
}

void	reverse(t_list **list)
{
	t_list	*tmp;

	if (!(*list) || !(*list)->next)
		return ;
	tmp = ft_lstlast(*list);
	del_last_elem(list);
	ft_lstadd_front(list, tmp);
}

void	write_rra(t_list **list)
{
	reverse(list);
	write(1, "rra\n", 4);
}

void	write_rrb(t_list **list)
{
	reverse(list);
	write(1, "rrb\n", 4);
}
