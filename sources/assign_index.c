/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/28 18:18:41 by jfremond          #+#    #+#             */
/*   Updated: 2021/09/16 14:47:47 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	assign_index(t_list *list)
{
	t_list	*current;
	t_list	*compare;

	current = list;
	while (current != NULL)
	{
		compare = list;
		while (compare != NULL)
		{
			if (current->value >= compare->value)
				++current->index;
			compare = compare->next;
		}
		current = current->next;
	}
}

void	assign_minus_one(t_list *list)
{
	t_list	*current;

	current = list;
	while (current != NULL)
	{
		current->index = -1;
		current = current->next;
	}
}
