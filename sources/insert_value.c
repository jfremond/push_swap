/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_value.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfremond <jfremond@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 11:33:23 by jfremond          #+#    #+#             */
/*   Updated: 2021/08/28 18:02:27 by jfremond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	insert_value(t_list **head_ref, int new_value)
{
	t_list	*new_node;
	t_list	*tmp;

	new_node = (t_list *)malloc(sizeof(t_list));
	new_node->value = new_value;
	new_node->index = -1;
	new_node->next = NULL;
	tmp = *head_ref;
	if (*head_ref == NULL)
	{
		new_node->prev = NULL;
		*head_ref = new_node;
		return ;
	}
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
	new_node->prev = tmp;
}
