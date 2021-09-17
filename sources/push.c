/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 12:35:46 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/12 09:38:06 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	push(t_list **dest, t_list **source)
{
	t_list	*tmp;

	if (!(*source))
		return ;
	tmp = *source;
	*source = (*source)->next;
	tmp->next = NULL;
	ft_lstadd_front(dest, tmp);
}

void	write_pa(t_list **dest, t_list **source)
{
	push(dest, source);
	write(1, "pa\n", 3);
}

void	write_pb(t_list **dest, t_list **source)
{
	push(dest, source);
	write(1, "pb\n", 3);
}
